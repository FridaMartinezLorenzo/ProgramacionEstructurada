
/*Alumno: Frida Ximena Martínez Lorenzo 102-C
  Programa que pude copiar una cadena dada, medir su longitud o concatenar dos cadenas de max 20
  Forma de compilar: gcc -Wall problema6.c -o problema6
   */
#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <string.h>

void Copiarcadenas (char *,char *);
int Longituddecadenas(char *);
void Concatenarcadenas(char *,char *);
int main()
{
int opc;
printf("Menú\n\n");
printf(" 1. Copiar cadena\n 2. Determinar la longitud de cadena \n 3.Concatenar cadenas \n 4.Salir  \nOPC: ");
scanf("%d",&opc);
while ((opc <=0)||(opc >4))
{
printf("Favorr de ingresar un número del menú");
scanf("%d",&opc);
}
if(opc ==1)
{
        char text[20],copia[20];
        char *p=NULL;
        char *q=NULL;
        printf("Ingrese la cadena a copiar: ");
        __fpurge(stdin);
        fgets(text,20,stdin);
        p=text;
        q=copia;
       Copiarcadenas(p,q);  
       printf("¡COPIA REALIZADA CON ÉXITO! \n COPIA: %s",copia);
}    
if (opc==2)
{
       char t[100];
       char *l=NULL;
       printf("Ingrese la cadena: ");
       __fpurge(stdin);
       fgets(t,100,stdin);
       //__fpurge(stdin);
       l=t;
       printf("La longitud de la cadena es: %d",Longituddecadenas(l));
}

if (opc==3)
{
     char text1[20];
     char text2[20];
     char *p=NULL,*q=NULL;
     printf("Ingrese la primer cadena: ");
     __fpurge(stdin);
     fgets(text1,20,stdin);
     printf("Ingrese la segunda cadena: ");
     __fpurge(stdin);
     fgets(text2,20,stdin);
     p=text1;
     q=text2;
     
      Concatenarcadenas(p,q);
}
return EXIT_SUCCESS;;
}

void Copiarcadenas(char *p,char *q){
        while (*p != '\0'){
        char aux=*p;
        *q=aux;
  	p++;
  	q++;
          }
          
      }

int Longituddecadenas (char *l)
{

     int contador=0;
     while (*l != '\n' )
     {
     contador++;
     l++;
     }
return contador;
}
void Concatenarcadenas(char *p, char *q)
{
char res[40]={0};
int i=0;
  while (*p != '\n')
  {
  res[i]=*p;
  i++;
  p++;
  }
  res[i]=' ';
 
  i=i+1;
  while (*q != '\n')
  {
  res[i]=*q;
  i++;
  q++;
  }
printf("Concatenado: %s \n", res);  
}



