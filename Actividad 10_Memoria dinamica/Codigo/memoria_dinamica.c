#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 3;

    // malloc: reserva memoria sin inicializar
    int *v = (int *)malloc(n * sizeof(int));
    v[0] = 10; v[1] = 20; v[2] = 30;
    printf("Malloc:\n");
    for (int i = 0; i < n; i++)
        printf("v[%d] = %d\n", i, v[i]);

    // realloc: amplia la memoria reservada
    v = (int *)realloc(v, 6 * sizeof(int));
    v[3] = 40; v[4] = 50; v[5] = 60;
    printf("\nRealloc (ampliado a 6):\n");
    for (int i = 0; i < 6; i++)
        printf("v[%d] = %d\n", i, v[i]);

    free(v);

    // calloc: reserva memoria e inicializa todo en 0
    int *c = (int *)calloc(3, sizeof(int));
    printf("\nCalloc (inicializa en 0):\n");
    for (int i = 0; i < 3; i++)
        printf("c[%d] = %d\n", i, c[i]);

    free(c);

    return 0;
}
