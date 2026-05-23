#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temp[4];
    float temp1, temp2;
    int dummy;


    temp[1]=20.5;
    temp[2]=19.2;


    printf ("Direccion de memoria de 2 flotantes: &temp1: %i, \n&temp2 %i\n", &temp1, &temp2);
    printf ("Direccion de temp[0]: %i,\n", temp);
    printf ("Direccion de &temp[3]: %i,\n", &temp[3]);
    printf ("Direccion de &dummy: %i\n", &dummy);

    printf ("Temp [1] es igual a: %.2f\n", temp[1]); //Acceso a elementos del arreglo
    printf ("Temp [2] es igual a:%.2f\n", temp[2]);

    printf ("\n-----------------\n");
    for (int i=0; i<4; i++)
    {
        printf ("Ingrese la temperatura %d: ", i + 1);
        scanf ("%f", &temp[i]);
    }


    for (int i=0; i<4; i++)
    {
        printf("La temperatura %d es: %.2f\n", i+1, temp[i]);

    }


    return 0;
}
