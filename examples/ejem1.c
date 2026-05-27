#include "../turtlec.h"
void koch(turtle* t, float length, int level);
int main(void){
  TurtleApp *app = turtleAppCreate(400, 300, "Test Line");

  if(app == NULL)
    return 1;

  Turtle *t = turtleAppGetTurtle(app);

  turtlePenUp(t);
  turtleGoTo(t, 50.0f, 250.0f);
  turtlePenDown(t);

  turtleSetColor(t, 255, 100, 0);
  turtleSetSpeed(t, 5.0f);
//  turtleForward(t, 300.0f);
  splitline(t, 300,2 );
  turtleAppRun(app);
  turtleAppDestroy(app);
  return 0;
}       
void koch(turtle* t, float length, int level){
	if( level == 0){
		turtleForward(t, length)
	return ;
}
	koch(t, length / 3.0, level-1);
	turtleLeft(t, 60);
	koch(t, length/ 3.0, level - 1);
	turtleRight(t, 120);
	koch(t, length / 3.0, level -1);
	turtleLeft(t, 60.0):
	koch(t, length / 3.0), level - 1);	
	
	}
