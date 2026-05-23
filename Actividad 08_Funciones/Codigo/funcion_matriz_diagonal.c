#include <stdio.h>
#include <stdlib.h>

void mostrar (int m[3][3])
{
    int i, j;
    for (i=0; i<3; i++)
    {

        for (j=0; j<3; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf ("\n");
    }
}

void capturar (int m[3][3])  //Funcion de recorrido basico
{
    int i,j;
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
        printf ("\n");
    }

}
int diagonal (int m[3][3])
{

    int suma=0, i;
    //suma= m[0][0]+m[1][1]+m[2][2];
    for (i=0; i<3; i++)
    {
        suma+=m[i][i];
    }
    printf ("\nLa suma de la diagonal es: %d ",suma);

    return suma;
}

int main()
{

///Funciones con matrices

    int m[3][3];
    int i, j, suma;
    printf ("\n---Ingrese la matriz---\n");
    printf ("\n");
    capturar(m);
    mostrar(m);
    suma = diagonal(m);


    FILE*archivo;
    archivo= fopen("tableroF.txt", "a");

    if (archivo != NULL)
    {
        for(i=0; i<3; i++)
        {
            for (j=0; j<3; j++)
            {

                fprintf(archivo, "%d ",m[i][j]);
            }
            fprintf(archivo, "\n");
        }
        fprintf (archivo, "La suma es: %d", suma);
        fclose(archivo);
    }
    return 0;

}

}
