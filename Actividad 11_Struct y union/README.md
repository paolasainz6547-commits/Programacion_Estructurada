# Struct y Union

## Descripción
Programas en C que practican el uso de estructuras (`struct`) y uniones (`union`)
para agrupar datos de distintos tipos, combinando su uso con punteros, el uso del apuntador flecha en structs,
funciones recursivas y manejo de memoria dinámica.

## Temas aplicados

- Declaración y uso de `struct`
- Declaración y uso de `union`
- Diferencia entre `struct` y `union` en memoria (`sizeof`)
- Acceso a campos con `.` y con puntero `->`
- Arreglos con struct
- Funciones recursivas
- Memoria dinámica con `malloc`, `calloc`, `realloc` y `free`

## Ejercicios

- **Codigo 1 (struct.c):** Programa introductorio al uso de `struct` en C. Se declara
  `struct alumno` con campos de nombre, edad y calificación, y se captura
  un alumno individual con `fgets` y `scanf`. Luego se declara `struct grupo`
  con los mismos campos y se usa un arreglo `alumnos[3]` para registrar 3
  alumnos en un ciclo `for`, accediendo a cada campo con la notación `alumnos[i].campo`.
  El programa demuestra cómo un `struct` permite agrupar datos de tipos distintos
  bajo un mismo identificador y trabajarlos como una sola unidad.

- **Codigo 2 (repaso_struct.c):** Programa de repaso que combina `struct` con función
  recursiva y punteros. Se declara `struct Barco` con campos de nombre, peso
  y tripulación, asignados directamente en `main`. La función `f_bajan` recibe
  un puntero `struct Barco *p` y resta 2 tripulantes por cada llamada usando
  `p->tripulacion -= 2`, accediendo al campo a través del puntero con `->`.
  La función se llama a sí misma hasta que la tripulación llega a 0, imprimiendo
  la tripulacion restante en cada iteracion.

- **Codigo 3 (union.c):** Programa introductorio al uso de `union` en C. Se declara
  `union Barco` con dos campos: `tripulacion` (int) y `carga` (float),
  ambos de 4 bytes. A diferencia del `struct`, todos los campos de una
  `union` comparten la misma dirección de memoria, por lo que solo un campo
  puede tener un valor válido a la vez. El programa demuestra esto asignando
  primero `tripulacion = 10` e imprimiéndolo correctamente, luego asignando
  `carga = 500.5`, lo que sobrescribe el valor anterior al usar la misma
  celda de memoria, dejando `tripulacion` con un valor corrputo.

## Compilación
```bash
gcc repaso_struct.c -o repaso_struct
gcc struct.c -o struct
gcc union.c -o union
```

## Ejecución
```bash
./repaso_struct
./struct
./union
```
