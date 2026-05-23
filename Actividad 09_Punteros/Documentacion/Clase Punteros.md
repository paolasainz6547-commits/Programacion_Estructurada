# Clase Punteros

Operador ternario 

C=a<b? 100 (V) : 0 (F)

A cada función, en la memoria se reserva un espacio para las instrucciones, paso por valor, la variable no se modifica y queda protegida en el main (es la misma desventaja)

Paso por referencia, indica punteros;

Una dirección de memoria es un entero

Un apuntador es una variable que guarda/almacena la dirección de memoria

int v[10];

si imprimo solo v, va a tomar al dirección de memoria del primer valor

lo que es igual a 

v==&v[0]

al definir un arreglo, el nombre de

# Memoria dinamica

malloc : memory allocation

se usa en memoria dinámica, se reserva memoria especifica

un puntero v, que multiplica por 5, el espacio de memoria de un int, que es 4 bytes, o sea, reservaria 20 espacios de memoria (para enteros)

`v=(int\*)malloc(5\*sizeof(int));`

Para liberar la memoria se usa free()

## Recursividad

Toda función recursiva necesita una condición para detenerse. Llamada caso base, y caso recursivo (este se tiene que acercar cada vez mas al caso base)
