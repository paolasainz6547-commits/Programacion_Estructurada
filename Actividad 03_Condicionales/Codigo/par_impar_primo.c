#include <stdio.h>
#include <stdlib.h>
int main()
{
int A, B, C, num, i, esPrimo = 1;
printf("Ingrese un numero: ");
scanf ("%d", &A);
if (A%2 ==0)
{
printf ("\n Su numero es par");
} else
printf ("No es par \n");
printf("\n Ingrese un numero: ");
scanf ("%d", &B);
if (B%2==1)
{
printf ("Es impar\n ");
} else

printf ("Es par");

printf("\n Ingrese un numero: ");
scanf ("%d", &C);
printf("Ingresa un numero: ");
scanf("%d", &num);
if (num <= 1) {
esPrimo = 0;
} else {
for (i = 2; i < num; i++) {
if (num % i == 0) {
esPrimo = 0;
}
}
}
if (esPrimo)
printf("Es un numero primo\n");
else
printf("No es un numero primo\n");
return 0;
