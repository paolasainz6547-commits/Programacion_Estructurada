#include <stdio.h>
#include <stdlib.h>

int f_doble (int a)
{
    int b;
    b = a * 2;
    return b;
}

// Funcion que triplica un numero usando punteros
int f_triple (int *a)
{
    *a = *a * 3;
    return *a;
}

//Se resta 2 al valor de a, si aun no cumple la funcion, vuelve a iterarse la funcion
int f_resta (int a)
{
    a -= 2;
    if (a <= 0)
        return a;
    else
        return f_resta(a); // Se llama a si misma hasta cumplir la condicion
}

// Funcion recursiva: calcula el factorial de n, usando punteros
int factorial (int n)
{
    if (n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int a, resultado, r;
    int *p;
    int *v;  // Puntero para memoria dinamica
    int x = 5;

    // Ejemplo de punteros

    p = &x; // p apunta a la direccion en memoria de x
    
    printf("\nEl valor de x es: %d", x); //Imprime 5
    printf("\nLa direccion en memoria de x es: %d", p); //Imprime direccion
    printf("\nEl valor de x por desreferencia es: %d", *p); //Imprime 5, por desreferencia al puntero


    // Captura del numero del usuario
    printf("\nIngresa un numero del 1 al 100: ");
    scanf("%d", &a);

    // Paso por valor, a no se modifica
    resultado = f_doble(a);
    printf("El doble de %d es:   %d\n", a, resultado);

    // Paso por referencia, a se modifica
    r=f_triple(&a);
    printf ("\nEl triple de %d es: %d",a/3, r);

    // Ejemplo de memoria dinamica: reserva 5 enteros
    v = (int*)malloc(5 * sizeof(int));
    free(v); // Libera la memoria reservada

    return 0;
}
