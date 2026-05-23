#include <stdio.h>
#include <stdlib.h>
int fsuma (int a, int b)
{
    int S;
    S= a+b;
    return S;
}
void cambiar (int x)
{
    x=100;
}

void mostrar (int v[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf ("%d", v[i]);
    }
}

void mostrarMatriz (int m[2][3])
{
    int i,j;
    for(i=0; i<2; i++)
    {
        for (j=0; j<3; j++)
        {
            printf ("%d", m[i][j]);
        }
        printf("\n");
    }
}

void duplicar (int *x) //Funcion con pase por parametro
{
    *x=(*x)*2;

}

int main()
{

    int resultado;
    resultado = fsuma(5, 5);
    printf ("\n Resultado %d", resultado);

    int a = 5;
    cambiar(a);
    printf (m"%d", a);

    int datos[5]= {1,2,3,4,5};
    mostrar(datos, 5);

    int m[2][3]= {{1,2,3},{4, 5, 6}};
    mostrarMatriz(m);

    int n=4;
    duplicar(&n);
    printf ("%d", n);

    return 0;

}
