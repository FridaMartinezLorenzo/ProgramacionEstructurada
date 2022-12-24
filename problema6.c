/*
Autor: Frida Ximena Martínez Lorenzo 102-C
Función: Programa que da solución a una ecuación de primer grado

Nombre:problema6.c
Forma de compilar: gcc -Wall problema6.c -o problema6 

*/
#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

int main ()
{
system("clear");
int a,b;
printf("ECUACION DE PRIMER GRADO DE LA FORMA a + bx =0\n");
printf("\nIngrese el valor de a (la constante) ");
scanf("%d",&a);
__fpurge(stdin);
printf("\nIngrese el valor de b (término que irá acompañado por la x) ");
scanf("%d",&b);
__fpurge(stdin);

if (b==0){ printf ("No tiene solución\n");
    }else {
        if ((a==0)&&(b==0))
        { printf("No tiene solución\n");
        } else {
                 float res1,res2;
                 res1=(-1*a);
                 res2=res1/b;
                 printf("El valor de x es: %f\n",res2);
                 
               }
 } 
    
return EXIT_SUCCESS;
}
