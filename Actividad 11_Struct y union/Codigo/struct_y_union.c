#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struct: cada campo tiene su propio espacio de memoria independiente
struct Barco
{
    int codigo;
    float carga;
    char nombre[20];
};

union IdentificadorBarco
{
    int codigo;
    float carga;
    char nombre[20];
};

int f_bajan (struct Barco *p)
{
    printf("  Tripulacion restante: %d\n", p->codigo);
    p->codigo -= 2;

    if (p->codigo <= 0)
    {
        printf("  El barco quedo sin tripulacion.\n");
        return 0;
    }
    else
        return f_bajan(p);
}

int main()
{
    struct Barco barco;
    union IdentificadorBarco id;

   //Sizeof de cada uno
    printf("--- 1. Tamano en memoria ---\n");
    printf("Size of struct: %d bytes\n", (int)sizeof(barco));
    printf("Size of union: %d bytes\n", (int)sizeof(id));


    // --- 2. Comportamiento del Struct ---
    printf("\n--- 2. Comportamiento del Struct ---\n");


    barco.codigo = 10; //Guardar varios datos al mismo tiempo
    barco.carga  = 500.5;
    strcpy(barco.nombre, "Totopo");

    printf("Codigo:  %d\n", barco.codigo);
    printf("Carga:   %.1f toneladas\n", barco.carga);
    printf("Nombre:  %s\n", barco.nombre);

    // --- 3. Funcion recursiva con el Struct ---
    printf("\n--- 3. Funcion recursiva (bajan tripulantes) ---\n");
    printf("Tripulacion inicial: %d\n", barco.codigo);

    struct Barco *p = &barco;
    f_bajan(p);
    printf("Tripulacion final: %d\n", barco.codigo);

    // --- 4. Comportamiento del Union (mal uso) ---
    printf("\n--- 4. Comportamiento del Union ---\n");

    // Si asignamos todo a la vez, los anteriores se sobrescriben
    id.codigo = 101;
    id.carga  = 50.5;
    strcpy(id.nombre, "Totopo"); // Esta asignacion borra las anteriores

    printf("Codigo  (corrompido): %d\n", id.codigo);
    printf("Carga   (corrompida): %.2f\n", id.carga);
    printf("Nombre  (correcto):   %s\n", id.nombre);

    //Uso correco
    printf("\n--- 5. Uso correcto del Union ---\n");

    // La forma correcta es usar un campo a la vez
    id.codigo = 202;
    printf("Codigo guardado y leido: %d\n", id.codigo);

    id.carga = 750.0;
    printf("Carga guardada y leida: %.1f\n", id.carga);

    strcpy(id.nombre, "Kraken");
    printf("Nombre guardado y leido: %s\n", id.nombre);

    return 0;
}
