#include <stdio.h>
#include <stdlib.h>


int f_doble (int a)
{
    int b;
    b = a*2;
    return b;
}

int f_triple (int *a)
{
    *a = *a *3;
    return *a;

}

int f_resta (a) //Recursividad
{
    a=a-2;
    if (a<=0) //Se resta 2 al valor de a, si aun no cumple la funcion, vuelve a iterarse la funcion
        return a;
    else
        f_resta(a)

    }

int factorial(int n)
{
    if(n==1)
        return 1;
    return n * factorial(n-1);
}
int main()
{
    int a, resultado, r;

    int *p;
    int *v;
    int x=5;
    p=&x;

    printf("\n %d", x); //Imprime 5
    printf("\n %d", p); //0
    printf("\n %d", *p); //Imprime 5

    printf ("\n Ingresa un numero del 1 al 100: ");
    scanf ("%d", &a);
    resultado = f_doble(a);
    printf ("%d", resultado);

    r=f_triple(&a);
    printf ("\n %d",r);


    v=(int*)malloc(5*sizeof(int));
    free(v);



    return 0;




}
