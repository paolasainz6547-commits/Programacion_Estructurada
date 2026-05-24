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

- **Codigo 1 (arreglos_y_direcciones.c):** Programa que combina captura de cadenas, concatenación
  y direcciones de memoria. Se capturan 4 nombres en `char lista[4][20]`
  con `fgets` y se concatenan en una sola cadena `NC` (Nombre completo) usando `strcat`, agregando espacios
  entre nombres pero no al final con `if (i < N - 1)`. Luego se imprimen las direcciones
  de memoria de cada nombre con `&lista[i]`,en terminal esto se ve reflejado como un salto de 20 bytes entre cada cadena,
   ya que cada char ocupa 1 byte, cada bloque lista[i] ocupa 20 bytes en memoria.
  Finalmente con `int ArregloC[5]` se imprime el valor y dirección de cada
  elemento, evidenciando que los enteros se almacenan con 4 bytes de separación entre cada uno, debido al tamaño de un int (4 bytes).

  **Codigo 2 (funciones_strings.c):** Programa que demuestra tres formas de leer
  y manejar cadenas en C.  El primer ejemplo usa `scanf`, que solo lee hasta el primer espacio, por lo que no captura
  nombre completo. El segundo ejemplo usa `fgets` para leer nombre y apellido completos, eliminando el `'\n'` automático
  con `strcspn`. El tercer ejemplo usa un arreglo bidimensional para registrar 4 jugadores
  en un ciclo `for`, compara los dos primeros con `strcmp` (devuelve `0` si son iguales)
  Se recorre el arreglo para imprimir cada jugador junto con la longitud de su nombre usando `strlen`.
  Funcion la cual lee y devuelve el número exacto de caracteres que componen al string, incluyendo espacios, y construye 
  un nombre de equipo completo usando `strcpy` para inicializar la cadena
  base y se usa `strcat` para concatenar los nombres de los 4 jugadores.

- **Codigo 3 (tablero_y_strings.c):** Programa que combina matrices de caracteres con manejo de archivos.
  Se declara `char tablero[5][5]` inicializada con `'~'` usando ciclos anidados, luego se
  asignan los caracteres `'B'`, `'X'` y `'O'` a celdas específicas por índice `[fila][columna]`
  y se imprime en consola. El nombre del usuario se lee con `fgets` y se limpia con `strcspn`.
  Todo se escribe en `tablero.txt` con `fprintf`. Al reabrir el archivo en modo lectura,
  se recorre línea por línea con `fgets`, se localiza la línea `"El nombre es:"` con `strstr`
  y se extrae el nombre saltando los primeros 14 caracteres con aritmética de punteros (`Rnombre + 14`).

## Compilación
```bash
gcc arreglos_y_direcciones.c -o arreglos_y_direcciones
gcc funciones_strings.c -o funciones_strings
gcc tablero_y_strings.c -o tablero_y_strings
```

## Ejecución
```bash
./arreglos_y_direcciones
./funciones_strings
./tablero_y_strings
```
