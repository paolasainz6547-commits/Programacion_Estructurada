# Estructuras Cíclicas

## Descripción
Programas en C que practican el uso de estructuras cíclicas
para la repetición de instrucciones bajo diferentes condiciones ycriterios. 

## Temas aplicados

- Ciclo `do / while`
- Ciclo `for`
- Ciclo `while`
- Ciclos for aninados.
- Uso de variables acumuladora
- Validación de datos dentro de un ciclo
- Menú con ciclo repetitivo

## Ejercicios aplicados en los codigos de Ciclos

- **Ejercicio 1:** Calculadora de promedio con menú `do/while`, ciclo `for` anidado,
  validación de calificaciones y cálculo de porcentaje de materias aprobadas y reprobadas. Funciona con un do while, el cual garantiza al menos una ejecucion del bloque de codigo, se ingresa la cantidad de materias, se hace una validacion para que el numero sea mayor o igual a 1, secuencialmente un ciclo for para recorrer hasta el numero de materias e ingresar el promedio para cada iteracion, se valida el rango positivo de las calificaciones, se hace la sumatoria, y el promedio, se calculan los porcentajes segun el raango de calificacion para cada materia y fimalmente se imprimen los resultados en la terminal.
- **Ejercicio 2:** Menú con `do/while` que se repite hasta que el usuario elige salir. Funciona con una variable opcion que mientras la condicion sea verdadera, se seguira ejecutando el programa.
- **Ejercicio 3:** Suma de N números ingresados por el usuario usando ciclo `for`. Su funcionamiento es un ciclo for que se repite nun numero N de veces, ingresado por el usuario, y realiza la sumatoria de estos numeros en cada iteracion.
- **Ejercicio 4:** Suma acumulada de números con `while` hasta ingresar 0 para salir

## Compilación
```bash
gcc calculadora_de_promedio.c -o calculadora_de_promedio
gcc "do while.c" -o do_while
gcc for.c -o for
gcc while.c -o while
```

## Ejecución
```bash
./calculadora_de_promedio
./do_while
./for
./while
```

## Ejecución
```bash
./programa
```
