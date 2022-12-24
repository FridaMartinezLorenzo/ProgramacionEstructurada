/*
Autor: Frida Ximena Martínez Lorenzo 102-C
Función: Programa que dado un número imprime su valor 
         en ASCII,binario y hexadecimal 
Nombre:problema 12.c
Forma de compilar: gcc -Wall problema12.c -o problema12 

*/
#include <stdio.h>
#include <stdlib.h>

int main(){
system ("clear");
int ascii;
int a[6];
char tecla;
printf("Tecla: ");
scanf("%c",&tecla);
ascii=tecla;
printf("El valor de la tecla es ASCII es: %d \n",ascii);
printf("EL número en hexadecimal es: %x \n",ascii);
printf("El número en binario es: ");
 
 int i=0;
 	while (ascii>0)
	{
		a[i] = ascii % 2;
		i = i + 1;
		ascii = ascii / 2;
	}
	for (i--; i >= 0; i--)
		printf("%d", a[i]);
	printf("\n");
return EXIT_SUCCESS;
}
