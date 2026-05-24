# Proyecto Final - Batalla Naval

## Descripción
Juego completo de Batalla Naval en C que integra structs, matrices, archivos,
funciones, punteros y memoria dinámica. Incluye modo 1 jugador contra CPU,
modo 2 jugadores, guardado de partidas, historial y exportación de resúmenes.

## Temas aplicados

- `struct` para encapsular el estado completo de cada partida
- Matrices `int[3][3]` como tableros de juego
- Macros con `#define` para representar estados del tablero
- Funciones modulares con paso de parámetros por referencia (`*pts`)
- Manejo de archivos binarios con `fread` y `fwrite` (`partidas.dat`)
- Escritura en archivos de texto con `fprintf` (`movimientos.txt`, `resumen_*.txt`)
- Registro de hora con `time.h` y `strftime`
- Menú interactivo con `do/while` y `switch`

## Funcionamiento del tablero

Cada tablero es una matriz `int[3][3]` donde cada celda almacena un estado
definido por macros:

Cada celda almacena un valor entero que representa su estado:
`0` (AGUA `~`) casilla vacía, `1` (BARCO `#`) barco posicionado,
`2` (FALLIDO `o`) disparo al agua, y `3` (IMPACTO `X`) barco hundido.
## Modos de juego

- **Modo 1 jugador:** El CPU coloca 3 barcos en posiciones fijas. El jugador
  tiene 5 intentos para lograr 3 impactos ingresando coordenadas `[fila][col]`.
  Cada disparo actualiza la celda de la matriz a `IMPACTO` o `FALLIDO` y
  se registra en `movimientos.txt` con hora exacta usando `strftime`.

- **Modo 2 jugadores:** Cada jugador nombra y coloca su flota (un barco de
  1 casilla y uno de 2) en su propia matriz `T[i][3][3]`. Durante la batalla,
  cada turno llama a `disparar` que recibe la matriz enemiga por puntero y
  actualiza sus celdas directamente. Se muestra el tablero propio con barcos
  visibles y el radar enemigo ocultando posiciones no descubiertas. El estado
  completo se guarda en `partidas.dat` tras cada disparo con `fwrite`.

- **Retomar partida:** Lee `partidas.dat` con `fread`, lista las partidas
  no terminadas y restaura el estado completo de la matriz y los impactos,
  continuando desde el turno guardado en `turno_actual`.

- **Historial:** Lee todas las partidas del archivo binario e imprime
  el ID, jugadores, marcador y si están terminadas o en curso.

## Archivos generados
El programa genera tres archivos: `partidas.dat` que almacena el estado
binario de todas las partidas con `fread` y `fwrite`, `movimientos.txt`
que registra cada disparo con hora, jugador, coordenadas y resultado, y
`resumen_<id>.txt` que exporta el resumen final de la partida con los
tableros y el ganador.

## Compilación
```bash
gcc batalla_naval.c -o batalla_naval
```

## Ejecución
```bash
./batalla_naval
```
