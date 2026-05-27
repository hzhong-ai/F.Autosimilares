#include "../turtlec.h"
void koch(Turtle* t, float length, int level);
void snowflake(Turtle* t, float length);

int main(void){
  TurtleApp *app = turtleAppCreate(800, 600, "Test Line");

  if(app == NULL)
    return 1;

  Turtle *t = turtleAppGetTurtle(app);

  turtlePenUp(t);
  turtleGoTo(t, 200.0f, 250.0f);
  turtlePenDown(t);

  turtleSetColor(t, 255, 100, 0);
  turtleSetSpeed(t, 5.0f);
//  turtleForward(t, 300.0f);
  snowflake(t,300);
  turtleAppRun(app);
  turtleAppDestroy(app);
  return 0;
}       
void koch(Turtle* t, float length, int level){
        if( level == 0){
             turtleForward(t, length);
        return ;
}
        koch(t, length / 3.0, level-1);
        turtleLeft(t, 60);
        koch(t, length/ 3.0, level - 1);
        turtleRight(t, 120);
        koch(t, length / 3.0, level -1);
        turtleLeft(t, 60.0);
        koch(t, length / 3.0, level - 1);      
 } 
void snowflake(Turtle* t, float length){
	koch(t, length, 3);
       	turtleRight(t,120.0);
	koch(t, length, 3);
	turtleRight(t,120.0);
	koch(t, length,3 );	
}
