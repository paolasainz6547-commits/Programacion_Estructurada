#include <stdio.h>
#include <stdlib.h>

int main()
{

    int opcion;  //Variable para almacenar la elección del usuario

    do    //Opciones del menu
    {
        printf ("1. Continuar\n");
        printf ("2. Salir\n");
        scanf ("%d", &opcion);  //Leer la opcion ingresada
    }
    while (opcion !=2);  //Repetir el ciclo mientras la opcion no sea 2
    printf("Fin del menu.\n"); //Mensaje de salir del ciclo
    return 0;
}


