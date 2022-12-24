/*Alumno: Frida Ximena Martínez Lorenzo 102-C
  Programa que determina si una palabra dada es un palíndromo
  Forma de compilar: gcc -Wall problema2.c -o problema2
   */
   
   #include <stdio.h>
   #include <stdlib.h>
   #include <string.h>
   #include <ctype.h>
   
   void Quita_Espacios(char *,char *); 
   int Palindroma (char *,char *);
   int main()
   {
   system("clear");
   char text[30]={0},sinespacio[30]={0};
   int res;
   char *p=NULL,*q=NULL,*t=NULL;
   printf("Ingrese la palabra: ");
   fgets(text,30,stdin);
   p=text;
   q=sinespacio;
   Quita_Espacios(p,q);
   
   printf("Sin espacios: %s ",sinespacio);
  
   t=sinespacio;
   res= Palindroma(t,q);
  if (res == 1)
  {printf("\n Es palíndroma");
   }else {
   printf("\nNo es palíndromo");
   }
   
   return EXIT_SUCCESS;
   
   }
   
   void Quita_Espacios(char *p, char *q)
   {
     while (*p != '\0')
     {
          if (isspace(*p)){
          p++;
          }else {
          char aux;
          aux=*p;
          *q=aux;
          q++;
          p++;
          }
            
     }
   }
   
   int Palindroma(char *t,char *s)
   {
    char aux1[30],aux2[30];
    int i=0, resp;
    while (*t !='\0')
         {
           aux1[i]=*t;
           aux2[i]=*s;
           i++;
           t++;
           s++;
         }
         
  if (strcmp (aux1,aux2)==0)
	{	resp=1;
	}else{
				
	resp=0;}
	return resp;
   }
