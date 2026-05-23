#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, N=4;
    char lista [4][20];
    char NC [100];
    int ArregloC[5]= {10, 20, 30, 40, 50};

    for (i = 0; i<N; i++)
    {
        printf("Ingrese su nombre %d: ",i+1);
        fgets(lista[i], sizeof(lista[i]), stdin);
        lista[i][strcspn(lista[i], "\n")] = '\0';
    }

    NC[0] = '\0';

    for (i=0; i<N; i++) // bucle para imprimir el nombre completo
    {
        strcat(NC, lista[i]);
        strcat(NC, " ");
    }

    printf("\nSu nombre completo es: %s\n", NC);

    for (i=0; i<5; i++)
    {
        printf ("\nLa direccion del nombre 1 es: %d\n", lista[i+1]);

    }

    ////Codigo con arreglos de numeros

    for (i=0; i<5; i++)
    {
        printf("\nValor: %d, Direccion: %d\n", ArregloC[i], &ArregloC[i]);

    }

    return 0;
}
