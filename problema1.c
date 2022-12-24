/*
Autor:Frida Ximena Martínez Lorenzo 102-C
Función:Programa que imprime la tabla de prefijos del SI
 
Nombre:problema1.c
Forma de compilar: gcc -Wall problema1.c -o problema1 

*/

#include <stdio.h>
#include <stdlib.h>
int main() {

system ("clear");
printf("FAVOR DE MAXIMIZAr LA PANTALLA \n\n");
printf("  Factor \t \t Prefijo \t \t Símbolo\t |   Factor \t\t \t Prefijo \t\t Símbolo \n");
printf("10 elevado 18 \t\t exa-  \t\t\t E \t\t |10 elevado -1 \t\t deci- \t\t\t d \t\t  \n");
printf("10 elevado 15 \t\t peta- \t\t\t P \t\t |10 elevado -2 \t\t centi-\t\t\t c \t\t  \n");
printf("10 elevado 12 \t\t tera- \t\t\t T \t\t |10 elevado -3 \t\t mili- \t\t\t m \t\t  \n");
printf("10 elevado 9  \t\t giga- \t\t\t G \t\t |10 elevado -6 \t\t micro-\t\t\t u \t\t  \n");
printf("10 elevado 6  \t\t mega- \t\t\t M \t\t |10 elevado -9 \t\t nano- \t\t\t n \t\t  \n");
printf("10 elevado 3  \t\t kilo- \t\t\t k \t\t |10 elevado -12\t\t pico- \t\t\t p \t\t  \n");
printf("10 elevado 2  \t\t hecto-\t\t\t h \t\t |10 elevado -15\t\t femto-\t\t\t f \t\t \n");
printf("10 elevado 1  \t\t deca- \t\t\t da \t\t |10 elevado -18\t\t atto- \t\t\t a \t\t \n");
return EXIT_SUCCESS;
}
