/*
Autor: Frida Ximena Martínez Lorenzo 102-C
Función: Programa que calcula el factor de conversión entre años-luz y metros,
         y hallar la distancia a una estrella (valor leído) en años luz.
         
Nombre:problema3.c
Forma de compilar: gcc -Wall problema4.c -lm -o problema4 

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdio_ext.h>
int main()
{
system("clear");
float distancia;long double resultado;int opc;
long int a=(300000*365),luz;
luz=(a*86400)*1000;
printf("¿Cuál es la distancia de la estrella en cuestión? En metros\n");
printf("Presione 1 si desea ingresar la distancia en potencia y de lo contrario presione 2 \n");
while ((opc<=0)||(opc>=3))
   {
     printf("\nFavor de colocar un número del menú: ");
     scanf("%d",&opc);
   }

if (opc==1)
 {
  int p;float b,c;
  printf("Ingrese el valor de la constante: ");
   scanf("%f",&c);
  __fpurge(stdin);
  printf("Ingrese el valor de la base en con decimales ");
  scanf("%f",&b);
  __fpurge(stdin);
  printf("Ingrese el valor de la potencia ");
  scanf("%d",&p);
  __fpurge(stdin);
  distancia=pow(b,p);
 }else {
         printf("Ingrese la cifra: ");
         scanf("%f",&distancia);
       }
 
 resultado=distancia/luz;
 printf("La distancia de la estrella en años luz es de: %LE años luz",resultado);

return EXIT_SUCCESS;
}
