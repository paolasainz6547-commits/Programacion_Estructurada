#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, N, suma = 0, valor;

    printf("Ingrese la cantidad de numeros a sumar:  ");   // Pedir al usuario cuántos números desea sumar
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        printf("Ingresa el numero %d: ", i);   //mostrar el numero de iteraciones
        scanf("%d", &valor);    //leer el numero ingresado
        suma += valor;  //variable acumuladora suma
    }

    printf("La suma total es: %d\n", suma);    // Mostrar el resultado final de la suma

    return 0;    //Fin del programa
}
