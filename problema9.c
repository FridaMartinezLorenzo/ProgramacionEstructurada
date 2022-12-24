/*
Autor: Frida Ximena Martínez Lorenzo 102-C
Función: Programa que calcula el pago neto de un trabajador d ela UTM
Nombre:problema9.c
Forma de compilar: gcc -Wall problema9.c -o problema9 

*/

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

int main ()
{
system ("clear");
float s,extra,q,imss;
int anti;
printf("Ingrese su salario diario");
scanf("%f",&s);
__fpurge(stdin);
printf("¿Cuántos años tiene de antiguedad?");
scanf("%d",&anti);
__fpurge(stdin);

if (anti==7)
{
 printf("7 años");
 extra=(s*0.04)+s;
 q=extra*15;
}else 
     {
      if (anti==8)
        {
          printf("8 años");
           extra=(s*0.06)+s;
            q=extra*15;
        }else 
            {
               if (anti==9)
                {
                 printf("9 años");
                 extra=(s*0.08)+s;
                 q=extra*15;
                }else 
                       {
                          if ((anti>=10)&&(anti<=14))
                             {
                                printf("10 a 14 años");
                                extra=(s*0.1)+s;
                                q=extra*15;
                             }else 
                                {
                                  if ((anti>=15)&&(anti<=19))
                                       {
                                         printf("15 a 19 años");
                                         extra=(s*0.12)+s;
                                         q=extra*15;
                                       }else
                                         {
                                           if ((anti>=20)&&(anti<=24))
                                             {
                                                printf("20 a 24 años");
                                                extra=(s*0.14)+s;
                                                q=extra*15;
                                             }else{
                                                  if ((anti>=25)&&(anti<=29))
                                                      {
                                                       printf("25 a 29 años");
                                                       extra=(s*0.16)+s;
                                                       q=extra*15;
                                                      }else 
                                                          {
                                                           if ((anti>=30)&&(anti<=34))
                                                             {
                                                             printf("30 a 34años");
                                                             extra=(s*0.18)+s;
                                                             q=extra*15;
                                                             }else
                                                               {
                                                                if (anti>=35)
                                                                 {
                                                                   printf("35 o mas años");
                                                                   extra=(s*0.20)+s;
                                                                   q=extra*15;
                                                                 }else
                                                                   {
                                                                   extra=s;
                                                                   q=extra*15;
                                                                   }
                                                               }
                                                          }
                                                   }
                                         }
                                }
                       }
            }
             
     }
     imss=(q*2)-((q*2)*0.2);
     printf("Pago quincemañ neto: %.4f",imss/2);
return EXIT_SUCCESS;
}
