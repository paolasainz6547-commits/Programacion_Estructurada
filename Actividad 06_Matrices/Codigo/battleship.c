#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int O; // Opción del menú
    int I, J;
    char jugadores[2][20];
    char jugador[20];
    char barcos_J1[2][20]; // Nombres barcos Jugador 1
    char barcos_J2[2][20]; // Nombres barcos Jugador 2

    do {
        // --- PORTADA ---
        printf("____________________________________________________\n");
        printf("|                                                  |\n");
        printf("|    __________________________________________    |\n");
        printf("|   /                                          \\   |\n");
        printf("|  |                BATALLA NAVAL                |  |\n");
        printf("|   \\__________________________________________/   |\n");
        printf("|                                                  |\n");
        printf("|          [ 1 ] ---  1 JUGADOR                    |\n");
        printf("|          [ 2 ] ---  2 JUGADORES                  |\n");
        printf("|          [ 3 ] ---  SALIR                        |\n");
        printf("|                                                  |\n");
        printf("|__________________________________________________|\n");
        printf("               \\_\\_           _|_                   \n");
        printf("              \\_\\_\\_        _|_|_|_                 \n");
        printf("             \\_\\_\\_\\_      _|_|_|_|_                \n");
        printf("            \\_\\_\\_\\_\\_\\___|_|_|_|_|_|_______________ \n");
        printf("            \\______________________________________/ \n");
        printf("              ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~    \n");
        printf("\n Seleccione una opcion: ");

        if (scanf(" %d", &O) != 1) {
            while(getchar() != '\n');
            continue;
        }

        switch(O) {
            case 1: {
                printf("\n--- Modo 1 Jugador ---");
                printf("\n____________________________________________________\n");
                printf("|                                                  |\n");
                printf("|    __________________________________________    |\n");
                printf("|   /                                          \\   |\n");
                printf("|  |            REGLAS DEL JUEGO               |  |\n");
                printf("|   \\__________________________________________/   |\n");
                printf("|                                                  |\n");
                printf("|[ 1 ] - Cuentas con 5 intentos                    |\n");
                printf("|                                                  |\n");
                printf("|[ 2 ]- Deberas realizar 3 impactos, el CPU        |\n");
                printf("|colocara dos barcos, un barco de una casilla      |\n");
                printf("|casilla y un barco de dos casillas .              |\n");
                printf("|                                                  |\n");
                printf("|[ 3 ]-El tablero es de 5x5 casillas, las          |\n");
                printf("| filas y columnas van enumeradas del 0-4,         |\n");
                printf("| al momento de ingresar tus coordenadas           |\n");
                printf("| deberan ser ingresadas con el siguiente          |\n");
                printf("| formato:                                         |\n");
                printf("| fila-espacio- columna ejemplo: 0 1               |\n");
                printf("|                                                  |\n");
                printf("|[ 4 ]-SIMBOLOGIA BASICA:                          |\n");
                printf("|                                                  |\n");
                printf("| Agua(~ o 0): Representa un espacio vacio         |\n");
                printf("|                                                  |\n");
                printf("| Barco(1): Representa la posicion de tus          |\n");
                printf("| barcos, pero no el del jugador contrario         |\n");
                printf("|                                                  |\n");
                printf("| Disparo Fallido(2): En tu tablero se             |\n");
                printf("| mostrara el numero dos para indicar que          |\n");
                printf("| fallaste en atinar a los barcos adversarios      |\n");
                printf("|                                                  |\n");
                printf("| Disparo Exitoso(3): FELICIDADES,                 |\n");
                printf("| uno de tus impactos resulto exitoso y            |\n");
                printf("| atinaste al barco contrario.                     |\n");
                printf("|__________________________________________________|\n");
                printf("               \\_\\_           _|_                   \n");
                printf("              \\_\\_\\_        _|_|_|_                 \n");
                printf("             \\_\\_\\_\\_      _|_|_|_|_                \n");
                printf("            \\_\\_\\_\\_\\_\\___|_|_|_|_|_|_______________ \n");
                printf("            \\______________________________________/ \n");
                printf("              ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~    \n");

                printf("\nNombre del Jugador: ");
                while (getchar() != '\n');
                fgets(jugador, sizeof(jugador), stdin);
                jugador[strcspn(jugador, "\n")] = 0;

                int tablero[5][5];
                int intentos = 0, fila, col, impactos = 0;
                for(I = 0; I < 5; I++) for(J = 0; J < 5; J++) tablero[I][J] = 0;

                tablero[1][1] = 1; tablero[1][2] = 1;
                tablero[4][0] = 1;

                while (intentos < 5 && impactos < 3) {
                    printf("\n--- TABLERO DE DISPAROS ---");
                    printf("\nTurno: %d/5 | Impactos: %d/3\n", intentos + 1, impactos);
                    printf("  0 1 2 3 4\n");
                    for (I = 0; I < 5; I++) {
                        printf("%d ", I);
                        for (J = 0; J < 5; J++) {
                            if(tablero[I][J] == 2) printf("2 ");
                            else if(tablero[I][J] == 3) printf("3 ");
                            else printf("~ ");
                        }
                        printf("\n");
                    }
                    printf("\n%s, ingresa Fila y Col (0-4): ", jugador);
                    scanf("%d %d", &fila, &col);

                    if (fila >= 0 && fila < 5 && col >= 0 && col < 5) {
                        if (tablero[fila][col] == 1) {
                            tablero[fila][col] = 3; impactos++;
                            printf("¡IMPACTO (3)!\n");
                        } else if (tablero[fila][col] == 0) {
                            tablero[fila][col] = 2; intentos++;
                            printf("Disparo Fallido (2)...\n");
                        } else printf("Ya disparaste ahí.\n");
                    } else printf("Coordenadas inválidas.\n");
                }
                if(impactos == 3) printf("\n¡GANASTE, %s!\n", jugador);
                else printf("\nPerdiste. Estaban en [1,1][1,2] y [4,0]\n");
                break;
            }

            case 2: {
                printf("____________________________________________________\n");
                printf("|                                                  |\n");
                printf("|    __________________________________________    |\n");
                printf("|   /                                          \\   |\n");
                printf("|  |            REGLAS DEL JUEGO               |  |\n");
                printf("|   \\__________________________________________/   |\n");
                printf("|                                                  |\n");
                printf("|[ 1 ] - Cuentas con intentos ilimitados           |\n");
                printf("|                                                  |\n");
                printf("|[ 2 ]- Deberas realizar 3 impactos para ganar     |\n");
                printf("|Cada jugador coloca un barco de 2 y uno de 1      |\n");
                printf("|                                                  |\n");
                printf("|[ 3 ]-El tablero es de 5x5 casillas (0-4)         |\n");
                printf("| Formato de ataque: fila espacio columna          |\n");
                printf("|                                                  |\n");
                printf("|[ 4 ]-SIMBOLOGIA BASICA:                          |\n");
                printf("| Agua(~): Espacio desconocido/vacio               |\n");
                printf("| Barco(1): Tu propia nave                         |\n");
                printf("| Fallido(2): Disparo al agua                      |\n");
                printf("| Impacto(3): ¡Objetivo alcanzado!                 |\n");
                printf("|__________________________________________________|\n");
                printf("               \\_\\_           _|_                   \n");
                printf("              \\_\\_\\_        _|_|_|_                 \n");
                printf("             \\_\\_\\_\\_      _|_|_|_|_                \n");
                printf("            \\_\\_\\_\\_\\_\\___|_|_|_|_|_|_______________ \n");
                printf("            \\______________________________________/ \n");
                printf("              ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~    \n");

                while (getchar() != '\n');
                for (int i = 0; i < 2; i++) {
                    printf("Nombre Jugador %d: ", i + 1);
                    fgets(jugadores[i], sizeof(jugadores[i]), stdin);
                    jugadores[i][strcspn(jugadores[i], "\n")] = 0;
                }

                int T1[5][5] = {0}, T2[5][5] = {0};
                int f, c, f2, c2, p1 = 0, p2 = 0;

                // --- POSICIONAMIENTO ---
                for (int p = 0; p < 2; p++) {
                    printf("\n--- %s, NOMBRA Y COLOCA TUS BARCOS ---\n", jugadores[p]);
                    for (int nb = 0; nb < 2; nb++) {
                        printf("Nombre para el Barco %d: ", nb + 1);
                        if(p==0) fgets(barcos_J1[nb], 20, stdin);
                        else fgets(barcos_J2[nb], 20, stdin);
                        if(p==0) barcos_J1[nb][strcspn(barcos_J1[nb], "\n")] = 0;
                        else barcos_J2[nb][strcspn(barcos_J2[nb], "\n")] = 0;
                    }

                    printf("Coloca '%s' (2 casillas, f c f c): ", (p==0)?barcos_J1[0]:barcos_J2[0]);
                    scanf("%d %d %d %d", &f, &c, &f2, &c2);
                    if(p==0){ T1[f][c]=1; T1[f2][c2]=1; } else { T2[f][c]=1; T2[f2][c2]=1; }

                    printf("Coloca '%s' (1 casilla, f c): ", (p==0)?barcos_J1[1]:barcos_J2[1]);
                    scanf("%d %d", &f, &c);
                    if(p==0) T1[f][c]=1; else T2[f][c]=1;

                    printf("\nTu flota ha sido desplegada:\n  0 1 2 3 4\n");
                    for(I=0; I<5; I++){
                        printf("%d ", I);
                        for(J=0; J<5; J++){
                            int actual = (p==0) ? T1[I][J] : T2[I][J];
                            printf("%s ", (actual==1)?"1":"~");
                        }
                        printf("\n");
                    }
                    printf("Presiona Enter para ocultar y continuar...");
                    while(getchar() != '\n'); getchar();
                    for(int l=0; l<40; l++) printf("\n");
                }

                // --- BATALLA ---
                while (p1 < 3 && p2 < 3) {
                    // Turno J1
                    printf("\n--- TURNO DE %s ---", jugadores[0]);
                    printf("\nBuscando a: %s y %s", barcos_J2[0], barcos_J2[1]);
                    printf("\nRadar:\n  0 1 2 3 4\n");
                    for(I=0; I<5; I++){
                        printf("%d ", I);
                        for(J=0; J<5; J++) printf("%s ", (T2[I][J]==2)?"2":(T2[I][J]==3)?"3":"~");
                        printf("\n");
                    }
                    printf("Atacar (Fila Col): "); scanf("%d %d", &f, &c);
                    if(T2[f][c] == 1) { T2[f][c] = 3; p1++; printf("¡IMPACTO!\n"); }
                    else if(T2[f][c] == 0) { T2[f][c] = 2; printf("DISPARO FALLIDO\n"); }
                    else printf("Ya disparaste ahí.\n");

                    if(p1 == 3) break;

                    // Turno J2
                    printf("\n--- TURNO DE %s ---", jugadores[1]);
                    printf("\nBuscando a: %s y %s", barcos_J1[0], barcos_J1[1]);
                    printf("\nRadar:\n  0 1 2 3 4\n");
                    for(I=0; I<5; I++){
                        printf("%d ", I);
                        for(J=0; J<5; J++) printf("%s ", (T1[I][J]==2)?"2":(T1[I][J]==3)?"3":"~");
                        printf("\n");
                    }
                    printf("Atacar (Fila Col): "); scanf("%d %d", &f, &c);
                    if(T1[f][c] == 1) { T1[f][c] = 3; p2++; printf("¡IMPACTO!\n"); }
                    else if(T1[f][c] == 0) { T1[f][c] = 2; printf("DISPARO FALLIDO\n"); }
                    else printf("Ya disparaste ahí.\n");
                }

                printf("\n--- FIN DE LA PARTIDA ---");
                printf("\n¡GANADOR: %s!\n", (p1==3)?jugadores[0]:jugadores[1]);
                break;
            }
        }

        if (O != 3) {
            printf("\nPresione Enter para volver al menu...");
            while(getchar() != '\n'); getchar();
        }

    } while(O != 3);

    return 0;
}
