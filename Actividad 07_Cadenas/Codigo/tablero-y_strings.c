#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char tablero[5][5];
    FILE *archivo;
    archivo = fopen("tablero.txt", "w"); // abrir en modo escritura
    int i, j, r;
    char nombre[50];
    char Rnombre[50];  //arreglo para extraer el nombre
    int letra; // fgetc devuelve un int
    int posicion = 0;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            tablero[i][j] = '~';
        }
    }
    fprintf(archivo, "Paola Sofia Sainz Barrios\n");

    tablero[1][2] = 'B';
    tablero[3][4] = 'X';
    tablero[2][1] = 'O';

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%c", tablero[i][j]);
        }
        printf("\n");
    }

    printf("\nIngrese su nombre: \n");
    fgets(nombre, sizeof(nombre), stdin);
    nombre[strcspn(nombre, "\n")] = '\0';
    printf("El nombre es: %s\n", nombre);
    fprintf(archivo, "El nombre es: %s\n", nombre);

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            fprintf(archivo, "%c", tablero[i][j]);
        }
        fprintf(archivo, "\n");
    }
    fprintf(archivo, "Paola Sofia Sainz Barrios\n");
    fprintf(archivo, "El nombre es: %s\n", nombre);

    fclose(archivo);

    archivo = fopen("tablero.txt", "r"); //Abrir de nuevo el archivo y mostrar solo lo leido por la terminal
    while (fgets(Rnombre, sizeof(Rnombre), archivo) != NULL)  //////////Usando fgets
    {
        Rnombre[strcspn(Rnombre, "\n")] = '\0';
        if (strstr(Rnombre, "El nombre es:") != NULL)
        {
            printf ("El nombre extraido del archivo es: %s\n", Rnombre +14);

        }
        printf("El nombre extraido del archivo es: %s\n", nombre);
        fclose(archivo);
        return 0;

    }
    return 0;
}
