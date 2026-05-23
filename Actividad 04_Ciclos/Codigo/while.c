#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, suma = 0;   // Variable acumuladora inicializada en 0

    printf("Dame un numero (0=salir): ");
    scanf("%d", &x);

    // Mientras el numero no sea 0, se acumula en la variable acumuladora 'suma'
    while (x != 0) {
        suma += x;     // Se suma el numero a la variable suma
        printf("Dame otro numero (0=salir): ");
        scanf("%d", &x);
    }

    // Mostrar el resultado final
    printf("\nLa suma total es: %d\n", suma);

    return 0;
}
