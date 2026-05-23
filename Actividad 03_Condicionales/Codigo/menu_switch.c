#include <stdio.h>

void menu()
{
    printf("Selecciona una opcion: \n");
    printf("1. Analizar Numero\n");
    printf("2. Calculadora\n");
    printf("3. Salir\n");
}

int main()
{
    int x, num1, num2, opcionP, opcionC, resultado;

    do
    {
        menu();
        scanf("%d", &opcionP);

        switch (opcionP)
        {
        case 1:  // Analizar numero
            printf("Ingrese un numero para determinar si es par o impar \n");
            scanf("%d", &x);
            if (x % 2 == 0)
                printf("Su numero %d es par\n", x);
            else
                printf("Su numero %d es impar\n", x);
            break;

        case 2: // Calculadora
            do
            {
                printf("Opcion Seleccionada Calculadora \n");
                printf("Dame dos numeros enteros: \n");
                scanf("%d %d", &num1, &num2);

                printf("Selecciona el calculo que desees hacer: \n");
                printf("1. Sumar\n");
                printf("2. Restar\n");
                printf("3. Regresar\n");
                scanf("%d", &opcionC);

                switch (opcionC)
                {
                case 1:
                    resultado = num1 + num2;
                    printf("Su resultado es: %d\n", resultado);
                    break;
                case 2:
                    resultado = num1 - num2;
                    printf("Su resultado es: %d\n", resultado);
                    break;
                case 3:
                    printf("Ha seleccionado regresar\n");
                    break;
                default:
                    printf("Opcion NO valida\n");
                }
            }
            while (opcionC != 3);
            break;

        case 3: // Salir
            printf("Adios mundo\n");
            break;

        default:
            printf("Opcion NO valida\n");
            break;
        }
    }
    while (opcionP != 3);

    return 0;
}
