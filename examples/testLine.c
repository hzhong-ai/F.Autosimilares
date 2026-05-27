#include "../turtlec.h"

void fractalTree ( Turtle * turtle , float length , int depth );

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
void fractalTree (Turtle* t, float length, int depth){
	if (depth = 0 || length <5)
		return ;
	turtleForward ( turtle , length ) ;
	turtleLeft ( turtle , 30) ;
	fractalTree ( turtle , length * 0.7 , depth - 1) ;

	turtleRight ( turtle , 60) ;
	fractalTree ( turtle , length * 0.7 , depth - 1) ;
	turtleLeft ( turtle , 30) ;
	turtleBackward ( turtle , length ) ;
}
