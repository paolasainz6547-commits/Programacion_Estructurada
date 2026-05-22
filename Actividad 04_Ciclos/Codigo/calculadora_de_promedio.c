#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, Opcion, aprobado=0, reprobado=0; //contadores materias aprobadas y reprobadas
    float P, S = 0, C, PA=0, PR=0;

    printf("Calculadora de promedio\n");

    do            //menu principal
    {
        printf("\n1. Calcular Promedio\n");
        printf("2. Salir \n");
        printf("Seleccionar una opcion: ");
        scanf("%d", &Opcion);

        if (Opcion == 1)
        {
            S = 0;
            printf("Ingrese la cantidad de materias: ");
            scanf("%d", &N);

            if (N >= 1)   //si el número de materias es mayor o igual a 1

            {

                for (i = 1; i <= N; i++)  //Ciclo para ingresar el promedio de cada materia
                {
                    printf("Ingrese la calificacion de su materia %d: ", i);
                    scanf("%f", &C);

                    if ( C<0 || C>100) //Validacion de rango de calificacion
                    {
                        printf ("Error, el rango de la calificacion debe estar entre 0-100\n");
                        i--;    //repetir la misma materia
                    }
                    else
                    {
                        S += C;  //Se hace la sumatoria de las calificaciones
                    }
                    P=S/N;
                    if (C>=60) //Proceso para calcular los aprobados y reprobados
                    {
                        aprobado+=1;
                    }
                    else if  (C>=0)
                    {
                        reprobado +=1;
                    }
                }
                printf("El promedio es: %.2f\n", P);

                PA= (aprobado*100.0)/N;    //Calculos de porcentaje
                PR= (reprobado*100.0)/N;

                //Resultados
                printf ("La suma total es: %.2f\n", S);
                printf ("Las materias aprobadas son: %d\n", aprobado);
                printf ("Las materias reprobadas son:  %d\n", reprobado);
                printf ("El porcentaje de materias aprobadas son: %.2f%%\n", PA);
                printf ("El porcentaje de materias reprobadas son:  %.2f%%\n", PR);
            }
            else
            {
                printf("Numero de materias no valido\n");
            }
        }
    }
    while (Opcion != 2);   //condicion de salida del menu
    return 0;
}
