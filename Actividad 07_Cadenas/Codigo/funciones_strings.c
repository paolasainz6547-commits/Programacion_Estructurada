include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char alumno1[16];
    char alumno2[16];
    char jugadores[4][20];
    int i, longitud;
    char NE[100];

    /* Ejemplo 1 utilizando scanf (Comentado)
    
    printf("\nIngrese el nombre del alumno 1: ");
    scanf("%s", alumno1);
    printf("El nombre del alumno 1 es: %s\n", alumno1);

    printf("\nIngrese el nombre del alumno 2: ");
    scanf("%s", alumno2);
    printf("El nombre del alumno 2 es: %s\n", alumno2);

    getchar(); // limpiar el buffer antes de fgets */

    printf("---- Registro de alumnos ----\n");

    // Ejemplo 2 usando fgets
    printf("Ingrese el nombre y apellido del alumno 1: ");
    fgets(alumno1, sizeof(alumno1), stdin);
    alumno1[strcspn(alumno1, "\n")] = '\0';
    printf("El nombre completo del alumno 1 es: %s\n\n", alumno1);

    printf("Ingrese el nombre y apellido del alumno 2: ");
    fgets(alumno2, sizeof(alumno2), stdin);
    alumno2[strcspn(alumno2, "\n")] = '\0';
    printf("El nombre completo del alumno 2 es: %s\n\n", alumno2);

    printf("---- Registro de jugadores ----\n");


    // Ejemplo 3 usando arreglos de caracteres
    for (i = 0; i < 4; i++)
    {
        printf("-> Ingrese el nombre del jugador %d: ", i + 1);
        fgets(jugadores[i], sizeof(jugadores[i]), stdin);

        jugadores[i][strcspn(jugadores[i], "\n")] = '\0';
    }

    if (strcmp(jugadores[0], jugadores[1]) == 0)
    {
        printf ("\n El jugador[0] y el jugador [1] se llaman igual");
    }
    else
    {
        printf ("\nLos nombres han sido registrados correctamente");
    }
    printf("\n---- Lista final de jugadores ----\n");


    // Funcion para mostrar la longitud del string
    for (i=0; i<4; i++) //Funcion para mostrar la longuitud del string
    {
        longitud = strlen(jugadores[i]);
        printf("\nJugador %d: %s (longitud: %d)", i + 1, jugadores[i], longitud);
    }

    strcpy (NE, "Equipo Battle Ship: ");

    strcat(NE, jugadores[0]);
    strcat(NE, ",");
    strcat(NE, jugadores[1]);
    strcat(NE, ",");
    strcat(NE, jugadores[2]);
    strcat(NE, " y ");
    strcat(NE, jugadores[3]);

    printf ("\n Los nombres del equipo son : %s \n", NE);

    return 0;
}
