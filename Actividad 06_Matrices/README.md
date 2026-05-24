# Matrices

## Descripción
Programas en C que practican el uso de matrices (arreglos bidimensionales)
para almacenar y manipular datos en estructura de filas y columnas,
incluyendo escritura de resultados en archivos de texto y y desarrollo
de un juego completo de Batalla Naval ¨Battleship¨

## Temas aplicados

- Declaración e inicialización de matrices
- Recorrido de matrices con ciclos `for` anidados
- Matrices de tipo `char`
- Lectura de cadenas con `fgets`
- Manejo de archivos con `fopen`, `fprintf` y `fclose`
- Limpieza del buffer con `getchar`

## Ejercicios
- **Ejercicio 1 (Battleship):** Programa en C que demuestra el uso correcto de matrices, ciclos for anidados
  para la elaboracion de un tablero para el juego Battleship, basado en el uso principal de matrices `int[5][5]`
  cada celda de la matriz representa un estado del tablero mediante valores enteros, 0 para casillas vacias, 1 para barco posicionado,
  2 para disparo fallido y 3 para impacto exitoso. 
 
- **Ejercicio 2 (matrices.c):** Programa que genera un tablero 3x3 de caracteres.
  El usuario ingresa cada numero del tablero individualmente mediante ciclos anidados.
  Una vez completado, el tablero se imprime en consola con formato visual.
  Posteriormente se solicita el nombre del usuario con `fgets` y tanto el tablero
  como el nombre se guardan en un archivo externo `resultado.txt` usando `FILE` y `fprintf`.
  Incluye validación de apertura de archivo y limpieza del buffer de entrada. 

- **Ejercicio 2 (resultado.txt):** Archivo de salida generado automáticamente
  por el programa anterior. Contiene el tablero 3x3 con los valores ingresados
  y el nombre del usuario, funcionando como evidencia del uso correcto de
  escritura en archivos en C.

## Compilación
```bash
gcc battleship.c -o battleship
gcc matrices.c -o matrices
```

## Ejecución
```bash
./battleship
./matrices
```
