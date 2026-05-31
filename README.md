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

# Conceptos Aplicados

Durante el desarrollo de estas soluciones se utilizaron los siguientes conceptos:

- Recursión.
- Casos base.
- Árboles de recursión.
- Figuras autosimilares.
- Manejo de punteros en C.
- Programación gráfica con TurtleC.
- Control de posición y orientación mediante gráficos de tortuga.

# Autor

Repositorio basado en la biblioteca TurtleC.

Soluciones desarrolladas para el Laboratorio de Recursión: Figuras Autosimilares con TurtleC.
