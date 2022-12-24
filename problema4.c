/*
Autor: Frida Ximena Martínez Lorenzo 102-C
Función: Programa de conversión de yardas a metros, metros a yardas,
         pulgadas a centímetros y centímetros a pulgadas
         
Nombre:problema4.c
Forma de compilar: gcc -Wall problema4.c -o problema4 

*/
#include <stdio.h>
#include <stdlib.h>

int main (){

system("clear");
int opc;
float res,valor;
printf("MENÚ\n\n");
printf("1. Conversión de yardas a metros\n");
printf("2. Conversión de metros a yardas\n");
printf("3. Conversión de pulgadas a centímetros\n");
printf("4. Conversión de centímetros a pulgadas\n");
printf("5. Salir\n\n");
printf("Ingrese el número de operación que desea realizar: ");
scanf("%d",&opc);

while ((opc<=0)||(opc>=6))
   {
     printf("\nFavor de colocar un número del menú: ");
     scanf("%d",&opc);
   }

switch (opc)
{
 case 1: printf("Ingrese la cantidad de yardas a convertir ");
         scanf("%f",&valor);
         res=valor/1.094;
         printf("%f yd equivalen a %0.4f m\n",valor,res);
         break;
         
 case 2: printf("Ingrese la cantidad de metros a convertir ");
         scanf("%f",&valor);
         res=valor*1.094;
         printf("%f m equivalen a %0.4f yd\n",valor,res);
         break; 
         
 case 3: printf("Ingrese la cantidad de pulgadas a convertir ");
         scanf("%f",&valor);
         res=valor*2.54;
         printf("%f inch equivalen a %0.4f cm\n",valor,res);
         break; 
         
 case 4: printf("Ingrese la cantidad de centímetros a convertir ");
         scanf("%f",&valor);
         res=valor/2.54;
         printf("%f cm equivalen a %0.4f inch\n",valor,res);
         break;
 case 5:return EXIT_SUCCESS;
}
 
return EXIT_SUCCESS;
}
