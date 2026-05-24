# Punteros

## Descripción
Programa en C que practica el uso de punteros, paso de parámetros por
referencia, funciones recursivas y manejo de memoria dinámica.

## Temas aplicados

- Declaración y uso de punteros (`int *p`)
- Operador de dirección (`&`) y desreferencia (`*`)
- Paso por valor y comparativa con paso por referencia
- Funciones recursivas
- Memoria dinámica con `malloc` y `free`

## Ejercicios

- **Codigo 1 (punteros.c):** Programa que demuestra el funcionamiento de punteros en C
  a través de varias funciones. Primero se declara `int *p` y se asigna la
  dirección de `x` con `p = &x`, luego se imprime el valor de `x` directamente,
  su dirección de memoria a través del puntero y su valor por desreferencia `*p`,
  mostrando el acceso a la misma variable en formas distintas.

  `f_doble` recibe el número por valor y devuelve su doble sin modificar la
  variable original. `f_triple` lo recibe por referencia con `int *a` y modifica
  directamente el valor en memoria usando `*a = *a * 3`, demostrando la diferencia
  entre ambos tipos de paso de parámetros.

  `f_resta` es una función recursiva que resta 2 al valor recibido y se llama
  a sí misma hasta que el resultado sea menor o igual a 0, momento en que
  devuelve el valor final. `factorial` también es recursiva y calcula el
  factorial de `n` multiplicando `n * factorial(n-1)` hasta llegar al caso
  base `n == 1`.

  Finalmente se usa `malloc` para reservar espacio en memoria dinámica para
  5 enteros con `(int*)malloc(5 * sizeof(int))` y se libera inmediatamente
  con `free(v)`, mostrando el ciclo básico de reserva y liberación de memoria.

  -**Codigo 2 (punteros introduccion.c)** Programa para introducir la logica de punteros con la asignacion de un puntero a una variable y
  operador de desreferencia par obtener su valor 
  
## Compilación
```bash
gcc punteros.c -o punteros
gcc punteros_introduccion.c -o punteros_introduccion
```

## Ejecución
```bash
./punteros
./punteros_introduccion
```
