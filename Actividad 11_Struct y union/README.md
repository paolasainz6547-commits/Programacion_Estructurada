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

- **struct.c:** Programa introductorio al uso de `struct` en C. Se declara
  `struct alumno` con campos de nombre, edad y calificación, y se captura
  un alumno individual con `fgets` y `scanf`. Luego se declara `struct grupo`
  con los mismos campos y se usa un arreglo `alumnos[3]` para registrar 3
  alumnos en un ciclo `for`, accediendo a cada campo con la notación `alumnos[i].campo`.
  El programa demuestra cómo un `struct` permite agrupar datos de tipos distintos
  bajo un mismo identificador y trabajarlos como una sola unidad.

- **repaso_struct.c:** Programa de repaso que combina `struct` con función
  recursiva y punteros. Se declara `struct Barco` con campos de nombre, peso
  y tripulación, asignados directamente en `main`. La función `f_bajan` recibe
  un puntero `struct Barco *p` y resta 2 tripulantes por cada llamada usando
  `p->tripulacion -= 2`, accediendo al campo a través del puntero con `->`.
  La función se llama a sí misma hasta que la tripulación llega a 0, imprimiendo
  la tripulacion restante en cada iteracion.

- **struct_y_union.c:** Programa que compara el comportamiento de `struct`
  y `union` en memoria. Con `sizeof` se muestra que el `struct Barco` ocupa
  la suma de todos sus campos, mientras que `union IdentificadorBarco` ocupa
  solo el espacio del campo más grande, ya que todos comparten la misma
  dirección de memoria. Se demuestra el uso incorrecto de union asignando los
  tres campos a la vez, lo que corrompe los valores anteriores debido a que se sobreescribe
  sobre el mismo espacio de memoria por el funcionamiento de union.
  El uso correcto mostrado es asignar y leer un
  solo campo a la vez. También incluye la función recursiva para el conteo de tripulacion hasta 0.

- **struct_punteros_memoria.c:** Programa que demuestra el ciclo completo
  de memoria dinámica aplicado a structs. Con `malloc` se reserva espacio
  para un solo `struct Barco` y se accede a sus campos con `->`. Con `calloc`
  se reserva una flota de 3 barcos inicializados automáticamente en 0,
  evidenciando la diferencia con `malloc` que no inicializa la memoria.
  Con `realloc` se amplía la flota de 3 a 5 barcos sin perder los datos
  anteriores, agregando 2 nuevos barcos al espacio extendido. Finalmente
  `free` libera toda la memoria reservada, mostrando el uso completo
  de reserva, uso y liberación de memoria dinámica con structs.

## Compilación
```bash
gcc main.c -o programa
```

## Ejecución
```bash
./programa
```
