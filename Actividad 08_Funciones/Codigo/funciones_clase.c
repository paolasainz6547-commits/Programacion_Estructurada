#include <stdio.h>
#include <stdlib.h>

int fsuma (int a, int b) //Funcion para sumar dos enteros 
{
    int S;
    S = a + b;
    return S;
}

void cambiar (int x)
{
    x = 100;
}

void mostrar (int v[], int n)  
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", v[i]);
    }
}

void mostrarMatriz (int m[2][3])  //Funcion para mostar la matriz en terminal
{
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

void duplicar (int *x) //Funcion pase por parametro
{
    *x = (*x) * 2;
}

int main()
{
    int resultado;
    resultado = fsuma(5, 5);
    printf("\nResultado: %d\n", resultado);

    int a = 5;
    cambiar(a);
    printf("a = %d\n", a);

    int datos[5] = {1, 2, 3, 4, 5};
    printf("Arreglo: ");
    mostrar(datos, 5);
    printf("\n");

    int m[2][3] = {{1, 2, 3}, {4, 5, 6}}; 
    printf("Matriz:\n");
    mostrarMatriz(m);

    int n = 4;
    duplicar(&n);  //se modifica la variable original debido al uso de punteros y desreferencia
    printf("n duplicado = %d\n", n);

    return 0;
}

