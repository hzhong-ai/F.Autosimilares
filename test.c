
  if(app == NULL)
    return 1;

  Turtle *t = turtleAppGetTurtle(app);

  turtlePenUp(t);
  turtleGoTo(t, 50.0f, 150.0f);
  turtlePenDown(t);

  turtleSetColor(t, 255, 100, 0);
  turtleSetSpeed(t, 5.0f);
//  turtleForward(t, 300.0f);
  splitline(t, 300, 1);
  turtleAppRun(app);
  turtleAppDestroy(app);
  return 0;
}

-- INSERTAR --                                                                                                                                                              31,12       Final

