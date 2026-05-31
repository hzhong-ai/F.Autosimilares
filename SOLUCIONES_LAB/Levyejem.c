#include <math.h>
#include "../turtlec.h"

void levy(Turtle *turtle, float length, int depth);

int main(void) {
    TurtleApp *app = turtleAppCreate(800, 600, "Curva Levy");

    if (app == NULL)
        return 1;

    Turtle *t = turtleAppGetTurtle(app);

    turtlePenUp(t);
    turtleGoTo(t, 50.0f, 300.0f);   // centro izquierdo (50 pix avanzados)
    turtlePenDown(t);

    turtleSetColor(t, 255, 0, 255);   // magenta
    turtleSetSpeed(t, 5.0f);

    levy(t, 200.0f, 6);

    turtleAppRun(app);
    turtleAppDestroy(app);

    return 0;
}

void levy(Turtle *turtle, float length, int depth) {
    if (depth == 0) {
        turtleForward(turtle, length);
        return;
    }

    turtleLeft(turtle, 45);
    levy(turtle, length / sqrt(2), depth - 1);

    turtleRight(turtle, 90);
    levy(turtle, length / sqrt(2), depth - 1);

    turtleLeft(turtle, 45);
}
