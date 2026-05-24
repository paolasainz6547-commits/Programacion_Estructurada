# Estructuras Condicionales

## Descripción
Programas en C que practican el uso de estructuras condicionales
para la toma de decisiones segun las diferentes condiciones y criterios.

## Temas aplicados

- Estructura `if / else`
- Estructuras condicionales anidadas
- Operadores relacionales 
- Operadores lógicos
- Ciclo `for` para validación de números primos

## Ejercicios

- **Ejercicio 1:** Verificar si una persona es mayor o menor de edad según su edad ingresada, evaluando la condicion de que el numero ingresado sea igual o mayor a 18, si la condicion es valida, es mayor de edad, de lo contario es menor de edad.
- **Ejercicio 2:** Determinar si un número es par o impar, utilizando el operador `%` el cual evalua el residuo de la division entre 2, si es 0, es par, de lo contario, es impar. Evaluar si un numero es primo. 
- **Ejercicio 3:** Evaluar si se es apto para beca o reinscripción según promedio y materias reprobadas. Utilizando el operador logico `||` para evaluar que dos condiciones sean verdaderas.
- **Ejercicio 4:** Verificar si se obtiene beca según promedio mínimo de 85 y cero materias reprobadas. Utilizando operadores logicos. 

## Compilación
```bash
gcc mayor_de_edad.c -o mayor_de_edad
gcc menu_switch.c -o menu_switch
gcc par_impar_primo.c -o par_impar_primo
gcc promedio_y_beca.c -o promedio_y_beca
gcc validacion_academica.c -o validacion_academica
```

## Ejecución
```bash
./mayor_de_edad
./menu_switch
./par_impar_primo
./promedio_y_beca
./validacion_academica
```
