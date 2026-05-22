#include <stdio.h>
#include <stdlib.h>

int main()
{
int a=3;
int b=4;
int c=a++ + --b;
printf("%d %d %d\n", a, b, c);

//Ejercicio 2
int x=10;
int y =3;
    printf ("%d\n", x+y*2);
    printf("%d\n", (x + y) * 2 ) ;

//Ejercicio 3:

int i = 5;
    printf("%d\n", i++);
    printf ("%d\n", ++i);

//Ejercicio 4
int g=5, h=2;
float r=g/h;
    printf("%.2f\n", r);


//Imagen 2
int j=5,k=3;
if(j>k) {
    printf("j es mayor");
}
else {
    printf("k es mayor");
}
printf("\n fin");
return 0;
  
//1- Se modifica el identificador de la variable porque ya habian sido usadas antes
//2SE agregaron las llaves correspondientes a if
//3-Se agregan llaves correspondintes a else
//4-Se separa el fin para imprimir despues
//5-Se cambia el identificador de variables dentro de la condicion
//6-Identacion
//7-Se agrega salto de linea






    return 0;
}
