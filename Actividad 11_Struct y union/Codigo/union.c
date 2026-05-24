#include <stdio.h>
#include <stdlib.h>

// union comparte la misma memoria entre sus miembros
union Barco
{
    int tripulacion;   // Miembro de tipo int (4 bytes)
    float carga;       // Miembro de tipo float (4 bytes)
};

int main()
{
    union Barco a;            // Declaracion de variable union

    // Solo un miembro activo a la vez
    a.tripulacion = 10;
    printf("Tripulacion: %d\n", a.tripulacion);

    // La carga sobrescribe a tripulacion (misma memoria)
    a.carga = 500.5;
    printf("Carga: %.2f\n", a.carga);

    return 0;
}
