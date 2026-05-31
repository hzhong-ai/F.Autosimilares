#include "../turtlec.h"

void fractalTree(Turtle *turtle, float length, int depth);

int main(void) {
    TurtleApp *app = turtleAppCreate(800, 600, "Fractal Tree");

    if (app == NULL)
        return 1;

    Turtle *t = turtleAppGetTurtle(app);

    turtlePenUp(t);
    turtleGoTo(t, 0.0f, 300.0f);   //Posicion inicial centro izquierdo
    turtlePenDown(t);

    turtleSetColor(t, 255, 0, 0);    // Seteamos a rojito
    turtleSetSpeed(t, 5.0f);

    fractalTree(t, 250.0f, 4); //Profundidad 4

    turtleAppRun(app);
    turtleAppDestroy(app);

    return 0;
}

void fractalTree(Turtle *turtle, float length, int depth) {
    if (depth == 0 || length < 5)
        return;

    turtleForward(turtle, length);

    turtleLeft(turtle, 30);
    fractalTree(turtle, length * 0.7f, depth - 1);

    turtleRight(turtle, 60);
    fractalTree(turtle, length * 0.7f, depth - 1);

    turtleLeft(turtle, 30);
    turtleBackward(turtle, length);
}
