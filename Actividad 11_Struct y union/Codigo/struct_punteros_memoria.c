#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Barco
{
    char nombre[20];
    char tipo[20];
    int tripulacion;
    float carga_toneladas;
};

int main()
{
    // Utilizando malloc
    // Reserva memoria para un solo barco dinamico
    printf("---1. Malloc ---\n");

    struct Barco *p_barco;
    p_barco = (struct Barco*)malloc(sizeof(struct Barco));

    strcpy(p_barco->nombre, "Aqua");
    strcpy(p_barco->tipo, "Carguero");
    p_barco->tripulacion = 10;
    p_barco->carga_toneladas = 500.5;

    printf("Barco: %s\n", p_barco->nombre);
    printf("Tipo: %s\n", p_barco->tipo);
    printf("Tripulacion: %d\n", p_barco->tripulacion);
    printf("Carga: %.1f toneladas\n", p_barco->carga_toneladas);

    // Utilizando calloc
    // Reserva una flota de 3 barcos, todos inicializados en 0
    printf("\n--- 2. Calloc ---\n");

    struct Barco *flota;
    flota = (struct Barco*)calloc(3, sizeof(struct Barco));

    printf("Flota inicial (3 barcos vacios):\n");
    for (int i = 0; i < 3; i++){
        printf("  Barco %d: nombre='%s', tripulacion=%d, carga=%.1f\n",
            i + 1, flota[i].nombre, flota[i].tripulacion, flota[i].carga_toneladas);
    }

    // Asignamos datos a los 3 barcos
    strcpy(flota[0].nombre, "Sol");   flota[0].tripulacion = 20; flota[0].carga_toneladas = 300.0;
    strcpy(flota[1].nombre, "Mar"); flota[1].tripulacion = 15; flota[1].carga_toneladas = 450.0;
    strcpy(flota[2].nombre, "Costa");  flota[2].tripulacion = 12; flota[2].carga_toneladas = 200.0;

    // Utilizando realloc
    // Amplia de 3 a 5 barcos
    printf("\n--- 3. Realloc ---\n");

    flota = (struct Barco*)realloc(flota, 5 * sizeof(struct Barco));

    strcpy(flota[3].nombre, "Oceano"); flota[3].tripulacion = 30; flota[3].carga_toneladas = 800.0;
    strcpy(flota[4].nombre, "Arena");  flota[4].tripulacion = 25; flota[4].carga_toneladas = 650.0;

    printf("Flota ampliada (5 barcos):\n");
    for (int i = 0; i < 5; i++) {
        printf("  Barco %d: %-10s | Tripulacion: %d | Carga: %.1f ton\n",
            i + 1, flota[i].nombre, flota[i].tripulacion, flota[i].carga_toneladas);
    }
    // Utilizar free para toda la memoria reservada
    printf("\n--- 4. Free ---\n");

    free(p_barco);
    free(flota);

    printf("Memoria liberada. Fin del programa.\n");

    return 0;
}
