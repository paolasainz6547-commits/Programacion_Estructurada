#include <stdio.h>

int main()
{
 int entero = -18;
 short int corto = -505;
 unsigned int edad = 18;
 char caracter = 'A';
 signed char schar = -78;
 unsigned char uchar = 'Z';
 long largo = -1234567L;
 long long larguisimo = 100000000000000LL;
 unsigned long long ulargo = 505404707LL;
 unsigned short ushort = 100;
 unsigned long  ulong = 1000000UL;
 float decimal = 3.1416f;
 double doble = 2.71728;
 long double decimalgrande = 299.792458L;


 printf ("\n valor int : %d", entero);
 printf("\n direccion int :%d", &entero);

 printf ("\n valor short : %hd", corto);
 printf("\n direccion short :%d", &corto);

 printf ("\n valor unsigned int : %u", edad);
 printf("\n direccion unsigned int :%d", &edad);

 printf ("\n valor char : %c", caracter);
  printf("\n direccion char :%d", &caracter);

 printf ("\n valor signed char : %d", schar);
  printf("\n direccion signed char :%d", &schar);

 printf ("\n valor unsigned char : %c", uchar);
 printf("\n direccion unsigned :%d", &uchar);

 printf ("\n valor long : %ld", largo);
 printf("\n direccion long :%d", &largo);

 printf ("\n valor long long : %lld", larguisimo);
  printf("\n direccion long long :%d", &larguisimo);

 printf ("\n valor unsigned long long : %llu", ulargo);
  printf("\n direccion unsigned long long :%d", &ulargo);

 printf ("\n valor unsigned short : %hu", ushort);
  printf("\n direccion unsigned short :%d", &ushort);

 printf ("\n valor unsigned long : %lu", ulong);
  printf("\n direccion  unsigned long :%d", &ulong);

 printf ("\n valor float : %f", decimal);
  printf("\n direccion float :%d", &decimal);

 printf ("\n valor double : %f", doble);
  printf("\n direccion double :%d", &doble);

 printf ("\n valor long double : %Lf", decimalgrande);
  printf("\n direccion long double :%d", &decimalgrande);
    return 0;
}
