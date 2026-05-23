#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, j;
    char tablero[5][5];
    char nombre[50];

    //Llenar el tablero
    printf("--- Tablero 3x3 ---\n");
    printf("Ingrese los caracteres del tablero fila por fila:\n\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Tablero[%d][%d]: ", i, j);
            scanf(" %c", &tablero[i][j]);
        }
        printf("\n");
    }

    //Mostrar tablero en consola
    printf("\n--- Tablero generado ---\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%c", tablero[i][j]);
        }
        printf("\n");
    }
    //Leer nombre del usuario
    while(getchar() != '\n');
    printf("\nIngrese su nombre: \n");
    fgets(nombre, sizeof(nombre), stdin);
    nombre[strcspn(nombre, "\n")] = '\0';
    printf("El nombre es: %s\n", nombre);

    //Escribir en archivo
    FILE *archivo = fopen("resultado.txt", "w");

    if (archivo == NULL)
    {
        printf("Error al crear el archivo.\n");
        return 1;
    }

    //Guardar tablero en archivo
    fprintf(archivo, "-- Tablero 3x3 ---\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            fprintf(archivo, "%c", tablero[i][j]);
        }
        fprintf(archivo, "\n");
    }

    //Guardar nombre en archivo
    fprintf(archivo, "\nPaola Sofia Sainz Barrios\n");
    fprintf(archivo, "El nombre es: %s\n", nombre);

    fclose(archivo);

    printf("\nDatos guardados correctamente en 'resultado.txt'\n");

    return 0;
}
