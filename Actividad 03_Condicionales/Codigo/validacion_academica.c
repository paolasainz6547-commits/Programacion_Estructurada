#include <stdio.h>
#include <stdlib.h>
int main()
{
    int E,P,NM;
    printf ("\n Ingrese su edad: ");
    scanf ("%d", &E);
    printf ("\n Ingrese su promedio : ");
    scanf ("%d", &P);
    printf ("\n Ingrese el numero de materias reprobadas: ");
    scanf ("%d", &NM);
    if (P>=90.0 && NM==0)
    {
        printf ("\n Felicidades, es apto para obtener una beca");
    }
    else
    {
        if (NM<=2)
        {
            printf ("\n Es apto para reeinscribirse ");
        }
        else
            printf ("\n Esta en situacion critica");
    }
    return 0;
}
