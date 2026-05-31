#include "../turtlec.h"

void fractalTree(Turtle *turtle, float length, int depth);

int main(void) {
    TurtleApp *app = turtleAppCreate(800, 600, "Arbol Fractal");

    if (app == NULL)
        return 1;

    Turtle *t = turtleAppGetTurtle(app);

    turtlePenUp(t);
    turtleGoTo(t, 50.0f, 300.0f);
    turtlePenDown(t);

    turtleSetColor(t, 255, 100, 0);
    turtleSetSpeed(t, 5.0f);

    fractalTree(t, 150.0f, 3);

    turtleAppRun(app);
    turtleAppDestroy(app);

    return 0;
}

void fractalTree(Turtle *turtle, float length, int depth) {
    if (depth == 0 || length < 5)
        return;

    turtleForward(turtle, length);

    /* Rama izquierda */
    turtleLeft(turtle, 30);
    fractalTree(turtle, length * 0.8f, depth - 1);

    /* Rama derecha */
    turtleRight(turtle, 60);
    fractalTree(turtle, length * 0.6f, depth - 1);

    turtleLeft(turtle, 30);

    turtleBackward(turtle, length);
}
