/*
Autor:Frida Ximena Martínez Lorenzo 102-C
Función: Programa que lanza una pregunta al azar sobre las masas de diveros objetos

Nombre:problema2.c
Forma de compilar: gcc -Wall problema2.c -lm -o problema3 

*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main (){

system ("clear");
int res;
long double a=pow(10.0,53), b=2*(pow(10.0,43)), c=2*(pow(10.0,30)), d=6*(pow(10.0,24)), e=7*(pow(10.0,22)), f=7*(pow(10.0,7)),
g=4*(pow(10.0,3)),h=6*(pow(10.0,1)),i=3*(pow(10.0,-3)),j=7*(pow(10.0,-10)),k=1*(pow(10.0,-15)),l=5*(pow(10.0,-17)),m=4*(pow(10.0,-26)), n=2*(pow(10.0,-27)),o=9*(pow(10.0,-31));
long int pregunta;
srandom (time (NULL));
pregunta=random()%15+1;

printf ("¿Qué tanto conoces sobre las masas de los objetos?\n\n");
switch (pregunta){
  case 1: printf("¿Cuál es el peso estimado en kilogramos del universo conocido? \n 1O elevado a la "); 
          scanf("%d",&res);  
          if (res == 53) {
                          printf("Felicidades has acertado, el peso estimado del universo en kg es de %LE kg",a);
                         }else {
                                printf("\a Incorrecto el peso estimado del universo conocido es de %LE",a);}
           break;  
     
  case 2: printf("¿Cuál es el peso en kilogramos de nuestra galaxia?\n 2x10 elvado a la ");
          scanf("%d",&res);
          if (res == 43){
                         printf("Felicidades has acertado, el peso estimado en kg de la galaxia es de %LE kg",b);
                        }else {
                                printf("\aIncorrecto el peso estimado del universo conocido es de  %LE kg",b);}
          break;

 case 3: printf("¿Cuál es el peso del Sol en kilogramos?\n 2x10 elevado a la ");
         scanf("%d",&res);
         if (res == 30){
                        printf("Felicidades has acertado, el peso en kilogramos del Sol es de %LE kg",c);
                       }else {
                              printf("\aIncorrecto el peso estimado del Sol es de %LE kg",c);}
         break;

case 4: printf("¿Cuál es el peso de la Tierra en kilogramos? \n 6x10 elevado a la ");
        scanf("%d",&res);
         if (res == 24){
                        printf("Felicidades has acertado, el peso en kilogramos de la Tierra es de %LE kg",d);
                       }else {
                              printf("\aIncorrecto el peso estimado de la Tierra es de %LE kg",d);}
         break;

case 5: printf("¿Cuál es el peso de la Luna en kilogramos? \n 7x10 elevado a la ");
        scanf("%d",&res);
         if (res == 22){
                        printf("Felicidades has acertado, el peso en kilogramos de la Luna es de %LE kg",e);
                       }else {
                              printf("\aIncorrecto el peso estimado de la Luna es de %LE kg",e);}
         break;
         
case 6: printf("¿Cuál es el peso de un trasatlático en kilogramos? \n 7x10 elevado a la ");
        scanf("%d",&res);
         if (res == 7){
                        printf("Felicidades has acertado, el peso en kilogramos de un trasatlántico es de %LE kg",f);
                       }else {
                              printf("\aIncorrecto el peso estimado de un trasatrántico es de %LE kg",f);}
         break;
         
case 7: printf("¿Cuál es el peso de un elefante en kilogramos? \n 4x10 elevado a la ");
        scanf("%d",&res);
         if (res == 3){
                        printf("Felicidades has acertado, el peso en kilogramos de un elefante es de %LE kg",g);
                       }else {
                              printf("\aIncorrecto el peso estimado de un elefante es de %LE kg",g);}
         break;
case 8: printf("¿Cuál es el peso de una persona en kilogramos? \n 6x10 elevado a la ");
        scanf("%d",&res);
         if (res == 1){
                        printf("Felicidades has acertado, el peso en kilogramos de una persona es de %LE kg",h);
                       }else {
                              printf("\aIncorrecto el peso estimado de una persona es de %LE kg",h);}
         break;
case 9: printf("¿Cuál es el peso de una uva en kilogramos? \n 3x10 elevado a la ");
        scanf("%d",&res);
         if (res == -3){
                        printf("Felicidades has acertado, el peso en kilogramos de una uva es de %LE kg",i);
                       }else {
                              printf("\aIncorrecto el peso estimado de una uva es de %LE kg",i);}
         break;
case 10: printf("¿Cuál es el peso de una partícula de polvo en kilogramos? \n 7x10 elevado a la ");
        scanf("%d",&res);
         if (res == -10){
                        printf("Felicidades has acertado, el peso en kilogramos de una partícula de polvo es de %LE kg",j);
                       }else {
                              printf("\aIncorrecto el peso estimado de una partícula de polvo es de %LE kg",j);}
         break;
case 11: printf("¿Cuál es el peso de un virus en kilogramos? \n 1x10 elevado a la ");
        scanf("%d",&res);
         if (res == -15){
                        printf("Felicidades has acertado, el peso en kilogramos de un virus es de %LE kg",k);
                       }else {
                              printf("\aIncorrecto el peso estimado de un virus es de %LE kg",k);}
         break;
case 12: printf("¿Cuál es el peso de una molécula de penicilina en kilogramos? \n 5x10 elevado a la ");
        scanf("%d",&res);
         if (res == -17){
                        printf("Felicidades has acertado, el peso en kilogramos de una molécula de penicilina es de %LE kg",l);
                       }else {
                              printf("\aIncorrecto el peso estimado de una molécula de penicilina es de %LE kg",l);}
         break;         
case 13: printf("¿Cuál es el peso de un átomo de uranio en kilogramos? \n 4x10 elevado a la ");
        scanf("%d",&res);
         if (res == -26){
                        printf("Felicidades has acertado, el peso en kilogramos de un átomo de uranio es de %LE kg",m);
                       }else {
                              printf("\aIncorrecto el peso estimado de un átomo de uranio es de %LE kg",m);}
         break;
case 14: printf("¿Cuál es el peso de un protón en kilogramos? \n 2x10 elevado a la ");
      
        scanf("%d",&res);
         if (res == -27){
                        printf("Felicidades has acertado, el peso en kilogramos de un protón es de %LE kg",n);
                       }else {
                              printf("\aIncorrecto el peso estimado de un protón es de %LE kg",n);}
         break;
case 15: printf("¿Cuál es el peso de un electrón en kilogramos? \n 9x10 elevado a la ");
        scanf("%d",&res);
         if (res == -31){
                        printf("Felicidades has acertado, el peso en kilogramos de un electrón es de %LE kg",o);
                       }else {
                              printf("\aIncorrecto el peso estimado de un electrón es de %LE kg",o);}
         break;

}
return EXIT_SUCCESS;
}

