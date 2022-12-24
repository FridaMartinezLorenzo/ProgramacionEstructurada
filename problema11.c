/*
Autor: Frida Ximena Martínez Lorenzo 102-C
Función: Programa que da un conocer si un bit (seleccionado por el usuario)
          del número también dada por este esta encendido o apagado y su signo
Nombre:problema11.c
Forma de compilar: gcc -Wall problema11.c -o problema11 

*/
#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

int main()
{
system("clear");
int n,bit;
printf("Ingrese el número:");
scanf("%d",&n);
__fpurge(stdin);
printf("Ingrese el bit a evaluar:");
scanf("%d",&bit);
__fpurge(stdin);
int contador=0;

unsigned i;
   
    for (i = 1 << (bit-1); i > 0; i/=2)
    {
        while (contador < 1)
        {
        (97 & i) ?  printf("1=Encendido \nSigno positivo\n") : printf("0=Apagado \nSigno negativo\n");
        contador=contador+1;
    }}

}
