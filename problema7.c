/*
Autor: Frida Ximena Martínez Lorenzo 102-C
Función: Programa que dada una operación entre dos dígitos enteros muestra el resultado de diversas fórmulas. 
Nombre:problema7.c
Forma de compilar: gcc -Wall problema7.c -lm -o problema7 

*/
#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <math.h>
int main(){
system ("clear");

float a,b,resultado;
printf("Multiplicación de números reales\n");
printf("Ingrese el primer número real ");
scanf("%f",&a);
__fpurge(stdin);
printf("Ingrese el segundo número real ");
scanf("%f",&b);
__fpurge(stdin);
resultado=a*b;
printf("%f x %f = %f \n",a,b,resultado);
printf("Resultado a 4 decimales redondeados  %0.4f \n",round (resultado));
printf("Resultado a 4 decimales truncados %0.4f \n",resultado);
printf("Resultado que solo nuestra la parte entera %8.0f \n",resultado);
printf("Resultado que solo muestra la parte fraccionaria del resultado a 4 dígitos truncados %.4f \n",(resultado-round (resultado)));
return EXIT_SUCCESS;
}
