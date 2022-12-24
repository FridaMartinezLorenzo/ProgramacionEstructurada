/*
Autor: Frida Ximena Martínez Lorenzo 102-C
Función: Programa que dadoun caracter desde el teclado verifica si es una
         letra o un número, en caso de ser letra minpuscula la vuelve mayúscula
         
Nombre:problema8.c
Forma de compilar: gcc -Wall problema8.c -o problema8 

*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main (){
system ("clear");
char tecla;
printf("Tecla: ");
scanf("%c",&tecla);
tecla=toupper(tecla);

if ((tecla>='A')&&(tecla<='Z')) 
  {
   printf("La tecla %c corresponde a una letra\n",tecla);
  }else{
        if ((tecla>='0')&&(tecla<='9')) 
        {
          printf("La tecla %c corresponde a un número\n",tecla);
        } else {
          printf("La tecla %c no es una letra ni un número \n",tecla);}
     }
return EXIT_SUCCESS;
}
