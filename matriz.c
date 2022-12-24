#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define LIM 20
void Mult(int[][LIM],int[][LIM],int[][LIM],int,int);
int main(){
system("clear");
int A[LIM][LIM];
int B[LIM][LIM];
int C[LIM][LIM];
int m1,n1,m2,n2;

printf("Dimensión de A \n Fila n=: ");
scanf("%d",&n1);
printf("\n Columna m=:");
scanf("%d",&m1);
printf("Dimensión de B \n Fila n=: ");
scanf("%d",&n2);
printf("\n Columna m=:");
scanf("%d",&m2);

while ((m1!=m2)||(n1!=n2))
{
    printf("Favor de ingresar dimensiones iguales");
    printf("Dimensión de A \n Fila n=: ");
    scanf("%d",&n1);
    printf("\n Columna m=:");
    scanf("%d",&m1);
    printf("Dimensión de B \n Fila n=: ");
    scanf("%d",&n2);
    printf("\n Columna m=:");
    scanf("%d",&m2);
}
//n es fila y m columna
printf("Ingrese A\n");
for (int i=0;i<m1;i++)
	{
	  for (int j=0;j<n1;j++){
	   printf("a %d%d = ",j+1,i+1);
	   scanf("%d",&A[i][j]);
	   }
    }
printf("Ingrese B\n");
for (int i=0;i<m1;i++)//columna
	{
	  for (int j=0;j<n1;j++){//fila
	   printf("a %d%d = ",i+1,j+1);
	   scanf("%d",&B[i][j]);
	   }
    }

Mult(A,B,C,m1,n1);
return EXIT_SUCCESS;
}


void Mult(int A[][LIM],int B[][LIM],int C[][LIM],int m1,int n1)
{
 int i,j,f,suma;
   for (f=0;f<m1;f++)//columnas matriz B
   {
     for (i=0;i<n1;i++)//FILAS MATRIZ A
     {
      int suma=0;
       for(j=0;j<m1;j++)//columnas matriz A
       {
         suma=suma+A[i][j]*B[j][f];
       }
     C[i][f]=suma;
     }
   
   }

//IMPRIMIMOS
for (i=0;i<m1;i++)
	{
		for (int j = 0; j<n1; j++)
		{
			printf(" %d  ",C[i][j]);
		}
      printf("\n");
	}
}

