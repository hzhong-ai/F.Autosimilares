# TurtleC – Laboratorio de Recursión

TurtleC es una biblioteca sencilla escrita en C para dibujar utilizando una tortuga gráfica basada en CSFML. Está orientada a cursos introductorios de programación y permite practicar conceptos fundamentales como funciones, punteros, estructuras, memoria dinámica y recursión.

En este proyecto se desarrollaron soluciones correspondientes al laboratorio de recursión sobre figuras autosimilares utilizando TurtleC.

# Dependencias

En Ubuntu puede instalar las dependencias con:

```bash
sudo apt install gcc make libcsfml-dev
```

# Compilación

Desde el directorio del proyecto:

```bash
make
```

Esto genera los ejecutables:

```text
./solucion1
./solucion2
```

También es posible compilar cada programa por separado:

```bash
make solucion1
make solucion2
```

# Limpieza

```bash
make clean
```

# Estructura del Proyecto

```text
.
├── turtlec.c
├── turtlec.h
├── Makefile
└── SOLUCIONES_LAB
    ├── solucion1.c
    └── solucion2.c
```

# Soluciones del Laboratorio

## solucion1.c – Árbol Fractal de 3 Ramas

Esta solución corresponde a la actividad donde se modifica el árbol fractal base para generar tres ramas en cada llamada recursiva:

- Rama izquierda.
- Rama central.
- Rama derecha.

Cada rama genera a su vez tres nuevas ramas de menor tamaño, produciendo una figura autosimilar con un factor de ramificación igual a tres.

Compilación:

```bash
make solucion1
```

Ejecución:

```bash
./solucion1
```

## solucion2.c – Árbol Fractal con Ramas de Diferente Tamaño

Esta solución corresponde a la actividad donde las ramas izquierda y derecha tienen tamaños distintos.

Características:

- Rama izquierda: 80% del tamaño de la rama padre.
- Rama derecha: 60% del tamaño de la rama padre.

La modificación produce un árbol fractal asimétrico y permite observar cómo los parámetros de escala afectan la forma final de la figura.

Compilación:

```bash
make solucion2
```

Ejecución:

```bash
./solucion2
```

# Ejemplo: Árbol Fractal con Colores Dinámicos

A continuación, se muestra un ejemplo de cómo implementar un árbol fractal clásico y cómo mejorar su apariencia cambiando el color de las ramas en función de la profundidad de la recursión.

## Código Base

```c
#include "../turtlec.h"

void fractalTree(Turtle *turtle, float length, int depth);

int main(void) {
    TurtleApp *app = turtleAppCreate(800, 600, "Fractal Tree");

    if (app == NULL)
        return 1;

    Turtle *t = turtleAppGetTurtle(app);

    turtlePenUp(t);
    turtleGoTo(t, 0.0f, 300.0f);  // Posición inicial: centro izquierdo
    turtlePenDown(t);

    turtleSetColor(t, 255, 0, 0); // Rojo inicial
    turtleSetSpeed(t, 5.0f);

    fractalTree(t, 250.0f, 4);

    turtleAppRun(app);
    turtleAppDestroy(app);

    return 0;
}

void fractalTree(Turtle *turtle, float length, int depth) {
    if (depth == 0 || length < 5)
        return;

    // Aquí se puede insertar la lógica de colores (ver abajo)

    turtleForward(turtle, length);

    turtleLeft(turtle, 30);
    fractalTree(turtle, length * 0.7f, depth - 1);

    turtleRight(turtle, 60);
    fractalTree(turtle, length * 0.7f, depth - 1);

    turtleLeft(turtle, 30);
    turtleBackward(turtle, length);
}
```

## Implementación de Colores según Profundidad

Para darle un aspecto más realista al árbol 🌳, puedes agregar la siguiente condición dentro de la función `fractalTree` antes de que la tortuga avance. Esto cambiará el color del trazo dependiendo del nivel de recursión (`depth`):

```c
if (depth > 5)
    turtleSetColor(turtle, 120, 70, 20);
else
    turtleSetColor(turtle, 0, 200, 0);
```

**¿A qué colores cambia?**

- `120, 70, 20`: **Marrón oscuro** 🟫. Las ramas cercanas a la raíz (profundidad grande) se dibujan de este color, simulando el tronco.
- `0, 200, 0`: **Verde brillante** 🟩. Las ramas pequeñas y externas (profundidad baja) toman este color, simulando el follaje.

**Paletas Alternativas Recomendadas:**

Si prefieres colores más intensos, puedes probar estas combinaciones que suelen verse muy bien en los fractales:

- **Estilo Bosque:**
  ```c
  if (depth > 5)
      turtleSetColor(turtle, 139, 69, 19);   // Marrón madera
  else
      turtleSetColor(turtle, 34, 139, 34);   // Verde bosque
  ```
- **Estilo Claro:**
  ```c
  if (depth > 5)
      turtleSetColor(turtle, 101, 67, 33);   // Marrón oscuro
  else
      turtleSetColor(turtle, 50, 205, 50);   // Verde lima
  ```

# Conceptos Aplicados

Durante el desarrollo de estas soluciones se utilizaron los siguientes conceptos:

- Recursión y casos base.
- Árboles de recursión.
- Figuras autosimilares y fractales.
- Manejo de punteros en C.
- Programación gráfica con TurtleC.
- Control de posición, orientación y color mediante gráficos de tortuga.

# Autor

Repositorio basado en la biblioteca TurtleC.

Soluciones desarrolladas para el Laboratorio de Recursión: Figuras Autosimilares con TurtleC.
