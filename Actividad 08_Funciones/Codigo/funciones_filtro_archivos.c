#include <stdio.h>
#include <stdlib.h>

void capturar (int v[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {

        printf ("Ingrese los numeros de la posicion [%d]: ", i+1);
        scanf ("%d", &v[i]);
        printf("\n");
    }
}

void mostar (int v[], int n) // Funcion para capturar los datos en el arreglo
{
    int i;
    printf("\nEl arreglo es:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", v[i]);
    }
}

int filtar (int origen[], int destino[], int n) // Funcion para filtrar numeros impares
{
    int impares=0,i;
    for (i=0; i<n; i++)
    {
        if (origen[i]%2 !=0)
        {

            destino[impares]=origen[i];
            impares++;

        }
    }

    return impares;
}

int multiplos_de_tres (int origen[], int destino[], int n) 
{
    int multi=0, i;
    for (i=0; i<n; i++)
    {
        if (origen[i]%3 !=0)
        {

            destino[multi]=origen[i];
            multi++;

        }
    }

    return multi;
}


int mayoresde10 (int origen[], int destino[], int n)
{
    int mayor10=0, i;
    for (i=0; i<n; i++)
    {
        if (origen[i]<10)
        {
            destino[mayor10]=origen[i];
            mayor10++;

        }
    }

    return mayor10;
}


int main()
{
    int n=6, i, j;
    int arreglo[n];
    int destino[n];
    int valor=0, contador_elementos=0, contador_elementos1=0;

    capturar(arreglo, n);
    mostar (arreglo, n);

    contador_elementos1 = filtar (arreglo, destino, n);
    printf("\nEl arreglo sin numeros pares es: \n");
    for (i=0; i<contador_elementos1; i++)
    {
        printf ("%d ", destino[i]);
    }
    printf ("\n");


    contador_elementos = multiplos_de_tres (arreglo, destino, n);
    printf ("\nArreglo sin multiplos de 3 es: \n");
    for (i=0; i<contador_elementos; i++)
    {
        printf ("%d ", destino[i]);
    }
    printf ("\n");

    contador_elementos= mayoresde10(arreglo, destino, n);
    printf ("\nArreglo sin numeros mayores a 10: \n");
    for (i=0; i<contador_elementos; i++)
    {
        printf ("%d ", destino[i]);
    }
    printf ("\n");

    FILE *archivo;
    archivo = fopen("resultado.txt","w");
    if (archivo != NULL)
    {
        for(i=0; i<contador_elementos1; i++)
        {
            valor= destino[i];
            fprintf(archivo,"%d ", valor);
        }
        
        fclose(archivo);
    }

    return 0;
}











