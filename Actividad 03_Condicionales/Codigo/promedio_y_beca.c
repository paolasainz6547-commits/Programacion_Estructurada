#include <stdio.h>
#include <stdlib.h>

int main()
{
    int promedio, materias;
    printf ("Ingrese su promedio: ");
    scanf ("%d", &promedio);
    printf ("Ingrese la cantidad de materias reprobadas: ");
    scanf ("%d", &materias);

    if ( promedio>=85 && materias==0)
    {
        printf ("Felicidades! Obtienes la beca\n " );
    }
    else
    {
        printf ("Lo siento, no cumples con los requerimientos\n");
    }
    return 0;
}

