#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, suma = 0;   // Variable acumuladora inicializada en 0

    printf("Dame un numero (0=salir): ");
    scanf("%d", &x);

    while (x != 0)  // Mientras el número no sea 0, se acumula en 'suma'

    {
        suma += x;  // Se suma el numero a la variable suma
        scanf("%d", &x);
    }
    printf("La suma total es: %d\n", suma);  // Mostrar el resultado final

    return 0;
}
