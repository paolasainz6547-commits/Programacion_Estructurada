#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct alumno
{
    char nombre[20];
    float cal;
    int Act;
    int derecho;
    int edad;
};

struct grupo
{
    char nombre[20];
    float cal;
    int Act;
    int derecho;
    int edad;
};


int main()
{
    struct alumno Paola;
    struct grupo alumnos [3];
    int i;

    printf ("\nIngresa el nombre del alumno: ");
    fgets(Paola.nombre, sizeof(Paola.nombre), stdin);
    Paola.nombre[strcspn(Paola.nombre, "\n")] = '\0';

    printf ("\nIngresa la edad del alumno: ");
    scanf ("%d", &Paola.edad);
    getchar();

    printf ("\nIngresa la calificacion del alumno: ");
    scanf ("%f", &Paola.cal);
    getchar();


    printf("\nEl nombre es: %s", Paola.nombre);
    printf ("\nLa edad del alumno es: %d",Paola.edad);
    printf ("\nLa calificacion es: %.2f\n",Paola.cal);


for (i=0; i<3; i++)
    {
        printf ("\nIngrese el nombre del alumno %d :", i+1);
        fgets(alumnos[i].nombre, sizeof(alumnos[i].nombre), stdin);
        alumnos[i].nombre[strcspn(alumnos[i].nombre, "\n")] = '\0'; //eliminar salto de linea
        printf("\nEl nombre del alumno %d es: %s\n",i+1, alumnos[i].nombre);

        printf("Ingrese la edad del alumno %d: ", i+1);
        scanf("%d", &alumnos[i].edad);
        getchar

        printf("Ingrese la calificacion del alumno %d: ", i+1);
        scanf("%d", &alumnos[i].cal);
        getchar();

    }

    return 0;
}


