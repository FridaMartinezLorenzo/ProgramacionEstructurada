/*
Autor: Frida Ximena Martínez Lorenzo 102-C
Función: Programa que dados numeros enteros en decimal
         calcula la suma, resta, multiplicacion y la imprime en
         binario octal y hexadecimal    
Nombre:problema10.c
Forma de compilar: gcc -Wall problema10.c -lm -o problema10

*/
#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <math.h>
#include <ctype.h>
int main ()
{
system ("clear");
int f,x,suma,resta,multi;
int a[8],a1[8],a2[8];
printf("Ingrese el valor de a: ");
scanf("%d",&f);
__fpurge(stdin);
printf("Ingrese el valor de b: ");
scanf("%d",&x);
__fpurge(stdin);

suma=f+x;

printf("El resultado de la suma en decimal es: %d\n, En Hexadecimal: %x \n El resultado en binario es: ",suma,toupper(suma));

int i=0;
 	while (suma>0)
	{
		a[i] = suma % 2;
		i = i + 1;
		suma = suma / 2;
	}
	for (i--; i >= 0; i--){
		printf("%d", a[i]);}
	printf("\n");

        
resta=f-x;
printf("\nEl resultado de la resta en decimal es: %d\n, En Hexadecimal: %x \n El resultado en binario es:",resta,toupper(resta));
int j=0;
 	while (resta>0)
	{
		a1[j] = resta % 2;
		j = j + 1;
		resta = resta / 2;
	}
	for (j--; j >= 0; j--){
		printf("%d", a1[j]);}
	printf("\n");


multi=(f*x);
printf("\nEl resultado de la multiplicación en decimal es: %d\n, En Hexadecimal: %x \n El resultado en binario es:",multi,toupper(multi));

int m=0;
 	while (multi>0)
	{
		a2[m] = multi % 2;
		m = m + 1;
		multi = multi / 2;
	}
	for (m--; m >= 0; m--){
		printf("%d", a2[m]);}
	printf("\n");


return EXIT_SUCCESS;
}
