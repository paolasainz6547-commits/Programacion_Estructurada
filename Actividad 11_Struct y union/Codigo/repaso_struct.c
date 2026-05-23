#include <stdio.h>
#include <stdlib.h>

struct Barco
{
    char nombre [20];
    int peso;
    int tripulacion;
    int tam;
};

    int f_bajan(struct Barco *p)
{
    p->tripulacion -= 2;

    if (p->tripulacion <= 0) {
        return 0;
    } else {
        return f_bajan(p);
    }
}

int main()
{
    struct Barco Totopo;
    //printf ("%d", Totopo);
    Totopo.peso=1000;
    Totopo.tripulacion=10;
    printf("El peso del barco Totopo es: %d\n", Totopo.peso);

    struct Barco *p;
    p=&Totopo;
    f_bajan(p);

    return 0;
}

