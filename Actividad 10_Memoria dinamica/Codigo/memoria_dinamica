#include <stdio.h>
#include <stdlib.h>

// Reserva memoria dinamica con malloc y la libera con free
void malloc_free()
{
    int n;
    printf("\n--- Malloc y Free ---\n");
    printf("Cuantos elementos desea reservar: ");
    scanf("%d", &n);

    int *v = (int *)malloc(n * sizeof(int));
    if (v == NULL)
    {
        printf("Error: no se pudo reservar memoria.\n");
        return;
    }

    printf("Ingresa %d valores:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    printf("\nValores guardados:\n");
    for (int i = 0; i < n; i++)
        printf("v[%d] = %d\n", i, v[i]);

    free(v);
    printf("Memoria liberada con free.\n");
}

// Reserva memoria con calloc, inicializa todo en 0
void calloc_free()
{
    int n;
    printf("\n--- Calloc ---\n");
    printf("Cuantos elementos desea reservar: ");
    scanf("%d", &n);

    int *v = (int *)calloc(n, sizeof(int));
    if (v == NULL)
    {
        printf("Error: no se pudo reservar memoria.\n");
        return;
    }

    printf("Valores iniciales (calloc inicializa en 0):\n");
    for (int i = 0; i < n; i++)
        printf("v[%d] = %d\n", i, v[i]);

    free(v);
    printf("Memoria liberada con free.\n");
}

// Amplia un arreglo existente con realloc
void realloc_free()
{
    printf("\n--- Realloc ---\n");

    int *v = (int *)malloc(3 * sizeof(int));
    if (v == NULL)
    {
        printf("Error al reservar memoria.\n");
        return;
    }

    v[0] = 10; v[1] = 20; v[2] = 30;

    printf("Arreglo original (3 elementos):\n");
    for (int i = 0; i < 3; i++)
        printf("v[%d] = %d\n", i, v[i]);

    v = (int *)realloc(v, 6 * sizeof(int));
    if (v == NULL)
    {
        printf("Error al redimensionar memoria.\n");
        return;
    }

    v[3] = 40; v[4] = 50; v[5] = 60;

    printf("\nArreglo ampliado con realloc (6 elementos):\n");
    for (int i = 0; i < 6; i++)
        printf("v[%d] = %d\n", i, v[i]);

    free(v);
    printf("Memoria liberada con free.\n");
}

int main()
{
    printf("--- Punteros y memoria dinamica ---\n");

    malloc_free();
    calloc_free();
    realloc_free();

    return 0;
}
