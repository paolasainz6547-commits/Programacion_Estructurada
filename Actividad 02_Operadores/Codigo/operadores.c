#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A = 10;
    int B = 20;
    int C = 40;
    int D;
    int E;

    D = A * B / C;
    printf("\nEl resultado de la operacion D es: %d", D);

    if (A <= 10 && B >= 10)
    {
        printf("\nSu resultado esta entre 10 y 20");
    }

    E = C > A ? 1 : 0;
    printf("\nEl valor de E es: %d", E);
    printf("\nLos valores incrementados y decrementados respectivamente de E y D son: %d, %d", ++E, --D);

    if (E != D || D > E)
    {
        printf("\nLos valores se calcularon correctamente");
    }

    E *= D;
    printf("\nEl nuevo valor de E es: %d\n", E);

    //Operador Ternario
    printf("*Operador Ternario*\n");
    int resultado = (A > B) ? A : B;
    printf("El mayor entre A y B es: %d\n\n", resultado);

    return 0;
}
