#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, N = 4;
    char lista[4][20];
    char NC[100];
    int ArregloC[5] = {1, 2, 3, 4, 5};

    //Captura de nombres
    for (i = 0; i < N; i++)
    {
        printf("Ingrese su nombre %d: ", i + 1);
        fgets(lista[i], sizeof(lista[i]), stdin);
        lista[i][strcspn(lista[i], "\n")] = '\0';
    }

    //Nombre completo
    NC[0] = '\0';

    for (i = 0; i < N; i++)
    {
        strcat(NC, lista[i]);
        if (i < N - 1)
            strcat(NC, " "); // Espacio solo entre nombres, no al final
    }

    printf("\nSu nombre completo es: %s\n", NC);

    //Direcciones de arreglo de nombres
    for (i = 0; i < N; i++)
    {
        printf ("\nLa direccion del nombre %d es: %i\n", i+1, &lista[i]);
    }

    //Arreglo de numeros
    printf("\n");
    for (i = 0; i < 5; i++)
    {
         printf("\nValor: %d, Direccion: %d\n", ArregloC[i], &ArregloC[i]);
    }

    return 0;
}
