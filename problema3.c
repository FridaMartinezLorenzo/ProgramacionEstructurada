/*
Autor: Frida Ximena Martínez Lorenzo 102-C
Función: Programa que calcula el n-ésimo término de una sucesión
Nombre:problema3.c
Forma de compilar: gcc -Wall problema3.c -lm -o problema3 

*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()

{
system("clear");
int  f=1,n;
double sum=0,a,b;
printf("Ingrese el n-ésimo término n= ");
scanf("%d", &n);

for(f=0;f<=n;f++)
{
  a=pow(10,f);
  b=1/pow(10,f+1);
  sum=a+b;
  printf("%.0f + %.10f = %.10f\n",a,b,sum);
 }
  
return EXIT_SUCCESS;
}
