#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char tablero[5][5];
    FILE *archivo;
    int i, j;
    char nombre[50];
    char Rnombre[50];

    // Inicializar tablero con '~'
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            tablero[i][j] = '~';
        }
    }

    // Colocar piezas en el tablero
    tablero[1][2] = 'B';
    tablero[3][4] = 'X';
    tablero[2][1] = 'O';

    // Mostrar tablero en pantalla
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%c", tablero[i][j]);
        }
        printf("\n");
    }

    // Capturar nombre
    printf("\nIngrese su nombre: \n");
    fgets(nombre, sizeof(nombre), stdin);
    nombre[strcspn(nombre, "\n")] = '\0';
    printf("El nombre es: %s\n", nombre);

    // Escribir en el archivo
    archivo = fopen("tablero.txt", "w");
    if (archivo == NULL)
    {
        printf("Error al abrir el archivo.\n");
        return 1;
    }

    fprintf(archivo, "Paola Sofia Sainz Barrios\n");
    fprintf(archivo, "El nombre es: %s\n", nombre);

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            fprintf(archivo, "%c", tablero[i][j]);
        }
        fprintf(archivo, "\n");
    }

    fclose(archivo);

    // Leer el archivo y extraer el nombre
    archivo = fopen("tablero.txt", "r");
    if (archivo == NULL)
    {
        printf("Error al abrir el archivo.\n");
        return 1;
    }

    while (fgets(Rnombre, sizeof(Rnombre), archivo) != NULL)
    {
        Rnombre[strcspn(Rnombre, "\n")] = '\0';
        if (strstr(Rnombre, "El nombre es:") != NULL)
        {
            printf("El nombre extraido del archivo es: %s\n", Rnombre + 14);
        }
    }

    fclose(archivo);
    return 0;
}
