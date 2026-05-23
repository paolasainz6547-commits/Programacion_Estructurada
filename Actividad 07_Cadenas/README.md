# Cadenas

## Descripción
Programas en C que practican el manejo de cadenas de caracteres (strings),
arreglos de cadenas, funciones de la biblioteca `string.h`, direcciones
de memoria, escritura y lectura de archivos de texto combinando matrices
de caracteres con operaciones son cadenas de caracteres.

## Temas aplicados

- Arreglos de caracteres (`char[]`) como cadenas
- Arreglos bidimensionales de cadenas, listas (`char[][20]`) 
- Lectura de cadenas con `scanf` y `fgets`
- Limpieza de salto de línea con `strcspn`
- Comparación de cadenas con `strcmp`
- Copia de cadenas con `strcpy`
- Concatenación con `strcat`
- Longitud de cadena con `strlen`
- Búsqueda dentro de cadenas con `strstr`
- Manejo de archivos con `fopen`, `fgets`, `fprintf`, `fclose`
- Direcciones de memoria de arreglos con `&`

## Ejercicios

- **tablero_y_strings.c:** Programa que combina el uso de matrices de caracteres
  con manejo de archivos y extracción de cadenas. Se declara una matriz `char tablero[5][5]`
  inicializada completamente con el carácter `'~'` usando ciclos `for` anidados,
  Luego se asignan los caracteres (`'B'`, `'X'`, `'O'`) a las coordenadas de la matriz usando índices `[fila][columna]`,
  y el tablero se imprime en consola. El usuario ingresa su nombre con `fgets` y se usa `strcspn` para eliminar el salto
  de línea automático. El nombre y el tablero se escriben en `tablero.txt` con `fprintf`.
  Despues el archivo se reabre en modo lectura (`"r"`), se lee línea por línea
  con `fgets` y se usa `strstr` para buscar la línea que contiene `"El nombre es:"`,
  extrayendo el nombre con aritmética de punteros (`Rnombre + 14`) para saltar
  los primeros 14 caracteres del titulo del archivo.

- **funciones_strings.c:** Programa que demuestra tres formas distintas de leer
  y manejar cadenas en C. El primer ejemplo usa `scanf` para leer una sola palabra
  por nombre, con la caracteristica de que `scanf` no lee espacios. El segundo ejemplo
  usa `fgets` para leer nombre y apellido completos, eliminando el salto de linea propio de la funcion
  `'\n'` con `strcspn`. El tercer ejemplo usa un arreglo bidimensional para registrar 4 jugadores
  en un ciclo `for`. Una vez capturados, se comparan los dos primeros
  con `strcmp` para verificar si tienen el mismo nombre, esta funcion arroja verdadero o falso (1 o 0).
  Se recorre el arreglo para imprimir cada jugador junto con la longitud de su nombre usando `strlen`.
  Funcion la cual lee y devuelve el número exacto de caracteres que componen al string, incluyendo espacios
  Finalmente se construye un nombre de equipo completo usando `strcpy` para inicializar la cadena
  base y múltiples llamadas a `strcat` para concatenar los nombres de los 4 jugadores
  con separadores `, ` y ` y `.

- **arreglos_y_direcciones.c:** Programa que combina captura de cadenas, concatenación
  y direcciones de memoria. Se declara `char lista[4][20]` para almacenar
  4 nombres ingresados por el usuario con `fgets` en un ciclo. Luego se construye
  un nombre completo usando `strcat` con espacios entre nombres pero
  sin espacio al final, controlado con una condición `if (i < N - 1)`. Después se
  imprimen las direcciones de memoria de cada fila del arreglo de nombres usando `&lista[i]`,
  en terminal esto se ve reflejado como un salto de 20 bytes entre cada cadena,
   ya que cada char ocupa 1 byte, cada bloque lista[i]
  ocupa 20 bytes en memoria.
  Por último se declara `int ArregloC[5] = {1,2,3,4,5}` y se imprime el valor
  y la dirección de cada elemento, mostrando cómo los enteros se almacenan de forma
  consecutiva en memoria con una separación de 4 bytes entre cada uno, debido al tamaño de un int (4 bytes)

## Compilación
```bash
gcc main.c -o programa
```

## Ejecución
```bash
./programa
```
