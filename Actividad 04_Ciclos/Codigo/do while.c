#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcion;  // Variable para almacenar la elección del usuario

    do
    {
        // Opciones del menu
        printf("\n--- MENU ---\n");
        printf("1. Continuar\n");
        printf("2. Salir\n");
        printf("Elige una opcion: ");
        scanf("%d", &opcion);         // Leer la opcion ingresada

        //Interfaz para el usuario
        if (opcion == 1)
        {
            printf("\nElegiste continuar\n");
        }

    }
    while (opcion != 2);    // Repetir el ciclo mientras la opcion no sea 2

    printf("\nFin del menu.\n"); // Mensaje de salir del ciclo

    return 0;
}
