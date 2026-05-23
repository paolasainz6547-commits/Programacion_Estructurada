# Funciones/Anotaciones de Clase

Creadas: 17 de abril de 2026 7:15
Asignatura: Programación Estructurada

Una función es un bloque de código que realiza una tarea especifica y puede ser reutilizado varias veces dentro de un programa

Sintaxis general 

```c
tipo nombreFuncion (parametros) {
instrucciones;
return valor;
}
```

En tipo no se permiten arreglos, no puede regresar todos los valores de una arreglo, se regresaría el primer valor del arreglo. Se admite bool y variables primitivas. en los parámetros.

- Ventajas
    
    Facilita el mantenimiento, lectura, pruebas y mantenimiento
    
    Reutiliza el código
    

Paso de parámetros por valor/ por copia: Cuando se envía una variable, la función recibe una copia.

Como es una variable local, por parametro, no se modifica en el main, sino en el espacio de memoria de la fucion