# Funciones

## Descripción
Programas en C que practican la declaración y uso de funciones para
modularizar el código, incluyendo paso de parámetros por valor y por
referencia, funciones con arreglos y matrices, y escritura de resultados
en archivos de texto.

## Temas aplicados

- Declaración y llamada de funciones
- Funciones con valor de retorno (`int`)
- Funciones `void` sin retorno. Procedimientos
- Paso de parámetros por valor
- Paso de parámetros por referencia con punteros (`*`)
- Funciones que reciben arreglos y matrices como parámetros
- Menú interactivo con `do/while` y `switch`
- Escritura en archivos con `fprintf`

## Ejercicios

- **Codigo 1 (filtro_archivos_menu.c):** Programa que modulariza operaciones de filtrado
  sobre un arreglo de 6 enteros. `capturar` llena el arreglo con valores
  ingresados por el usuario. `mostar` lo imprime en consola. `filtar` recorre
  el arreglo origen y copia al arreglo destino solo los números impares,
  devolviendo la cantidad de elementos copiados. `multiplos_de_tres` hace lo
  mismo excluyendo múltiplos de 3, y `mayoresde10` filtra los menores a 10.
  Un menú `do/while` con `switch` permite elegir qué filtro se quiere usar. Al salir,
  se escribe en el archivo de texto el arreglo original y el arreglo sin multiplos de 3
  en  `resultado.txt` con `fprintf`.

- **Codigo 2 (funcion_matriz_diagonal.c):** Programa que codifica matrices 3x3 mediante
  tres funciones especializadas. `capturar` llena la matriz elemento por elemento
  con `scanf` usando ciclos anidados. `mostrar` la imprime en consola con el
  mismo recorrido. `diagonal` calcula la suma de la diagonal principal recorriendo
  solo los elementos donde `i == j` con una logica de `suma += m[i][i]`.
  El resultado se guarda en `tableroF.txt` abierto en modo `"a"` (append),
  escribiendo la matriz completa y la suma
  de la diagonal sin sobreescribir o borrar contenido previo.
  
- **Codigo 3 (funciones_clase.c):** Programa de introduccion al uso de funciones en C.
  `fsuma` recibe dos enteros y devuelve su suma. `cambiar` recibe un entero
  por valor e intenta modificarlo, demostrando que el cambio no afecta la
  variable original, ya que por paso por valor, se envia una copia de la varibale,
  por lo que mo se modifica la variable original . `mostrar` recorre e imprime un arreglo recibido como
  parámetro. `mostrarMatriz` recibe una matriz `int[2][3]` y la imprime con
  ciclos anidados. `duplicar` recibe un puntero `int *x` y multiplica el valor
  original por 2 usando desreferencia `*x = (*x) * 2`, demostrando la diferencia
  entre paso por valor y paso por referencia.

## Compilación
```bash
gcc filtro_archivos_menu.c -o filtro_archivos_menu
gcc funcion_matriz_diagonal.c -o funcion_matriz_diagonal
gcc funciones_clase.c -o funciones_clase
gcc funciones_filtro_archivos.c -o funciones_filtro_archivos
```

## Ejecución
```bash
./filtro_archivos_menu
./funcion_matriz_diagonal
./funciones_clase
./funciones_filtro_archivos
```

## Ejecución
```bash
./programa

