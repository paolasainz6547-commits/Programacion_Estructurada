# Archivos
## Descripción
Programa en C que practica la escritura y lectura de archivos de texto,
combinando el manejo de matrices de caracteres con operaciones sobre
cadenas y extracción de datos desde un archivo externo.

## Temas aplicados

- Apertura y cierre de archivos con `fopen` y `fclose`
- Escritura en archivo con `fprintf`
- Lectura de archivo línea por línea con `fgets`
- Validación de apertura de archivo con `if (archivo == NULL)`
- Búsqueda de cadenas en archivo con `strstr`
- Extracción de subcadena con aritmética de punteros
- Matrices de caracteres como tablero
- Modos de apertura `"w"` (escritura) y `"r"` (lectura)

## Ejercicio

- **Codigo 1 (archivos.c):** Programa que demuestra el ciclo completo de escritura y
  lectura de un archivo en C. Se declara `char tablero[5][5]` inicializado
  con `'~'` usando ciclos anidados, y se asignan los caracteres `'B'`, `'X'`
  y `'O'` a celdas específicas por índice `[fila][columna]`. El tablero se
  imprime en consola y el nombre del usuario se captura con `fgets`,
  eliminando el `'\n'` con `strcspn`.

  El archivo `tablero.txt` se abre en modo `"w"` y se escriben el nombre
  fijo, el nombre ingresado y el tablero completo con `fprintf`. Se valida
  que el archivo se haya abierto correctamente antes de escribir, devolviendo
  error con `return 1` si falla. Una vez cerrado con `fclose`, el archivo
  se reabre en modo `"r"` y se recorre línea por línea con `fgets`. Al
  encontrar la línea que contiene `"El nombre es:"` usando `strstr`, se
  extrae el nombre saltando los primeros 14 caracteres con aritmética
  de punteros (`Rnombre + 14`) e imprimiéndolo en consola.

## Compilación
```bash
gcc archivos.c -o archivos
```

## Ejecución
```bash
./archivos
```
