#include <stdio.h>
#include <stdlib.h>

struct Barco
{
    char nombre[20];
    int peso;
    int tripulacion;
    int tam;
};

// Resta 2 tripulantes por cada llamada recursiva hasta llegar a 0
int f_bajan (struct Barco *p)
{
    printf("  Tripulacion restante: %d\n", p->tripulacion);
    p->tripulacion -= 2;

    if (p->tripulacion <= 0)
    {
        printf("  El barco quedo sin tripulacion.\n");
        return 0;
    }
    else
        return f_bajan(p);
}

int main()
{
    struct Barco Totopo;
    Totopo.peso = 1000;
    Totopo.tripulacion = 10;

    printf("Barco: Totopo\n");
    printf("Peso: %d kg\n", Totopo.peso);
    printf("Tripulacion inicial: %d\n\n", Totopo.tripulacion);

    printf("Bajando tripulantes...\n");
    struct Barco *p = &Totopo;
    f_bajan(p);

    printf("\nTripulacion final: %d\n", Totopo.tripulacion);

    return 0;
}
