#include <stdio.h>
#include <stdlib.h>
#define LIM 20

void Sum(int[][LIM],int[][LIM],int[][LIM],int,int);
void Resta(int[][LIM],int[][LIM],int[][LIM],int,int);
void Mult(int[][LIM],int[][LIM],int[][LIM],int,int);
void Sim(int[][LIM],int,int);
int main()
{
system("clear");
int opc;
int A[LIM][LIM];
int B[LIM][LIM];
int C[LIM][LIM];
printf("Menú MATRICES\n\n");
printf(" 1. Suma\n 2. Resta \n 3. Multiplicación \n 4. Simétrica \n 5. Salir  \nOPC: ");
scanf("%d",&opc);
while ((opc <=0)||(opc >6))
{
printf("Favor de ingresar un número del menú: ");
scanf("%d",&opc);
}

if (opc == 1)
{
system("clear");
int m1,n1,m2,n2;

printf("Dimensión de A \n Fila m=: ");
scanf("%d",&m1);
printf("\n Columna n=:");
scanf("%d",&n1);
printf("Dimensión de B \n Fila m=: ");
scanf("%d",&m2);
printf("\n Columna n=:");
scanf("%d",&n2);

while ((m1!=m2)||(n1!=n2))
{
	printf("Favor de ingresar dimensiones iguales");
    printf("Dimensión de A \n Fila m=: ");
    scanf("%d",&m1);
    printf("\n Columna n=:");
    scanf("%d",&n1);
    printf("Dimensión de B \n Fila m=: ");
    scanf("%d",&m2);
    printf("\n Columna n=:");
    scanf("%d",&n2);
}
//m es fila y n columna
printf("Ingrese A\n");
for (int i=0;i<m1;i++)
	{
	  for (int j=0;j<n1;j++){
	   printf("a %d%d = ",j+1,i+1);
	   scanf("%d",&A[i][j]);
	   }
    }
printf("Ingrese B\n");
for (int i=0;i<m1;i++)
	{
	  for (int j=0;j<n1;j++){
	   printf("a %d%d = ",j+1,i+1);
	   scanf("%d",&B[i][j]);
	   }
    }

Sum(A,B,C,m1,n1);
}

if (opc == 2)
{
system("clear");
int m1,n1,m2,n2;

printf("Dimensión de A \n Fila m=: ");
scanf("%d",&m1);
printf("\n Columna n=:");
scanf("%d",&n1);
printf("Dimensión de B \n Fila m=: ");
scanf("%d",&m2);
printf("\n Columna n=:");
scanf("%d",&n2);

while ((m1!=m2)||(n1!=n2))
{
	printf("Favor de ingresar dimensiones iguales");
    printf("Dimensión de A \n Fila m=: ");
    scanf("%d",&m1);
    printf("\n Columna n=:");
    scanf("%d",&n1);
    printf("Dimensión de B \n Fila m=: ");
    scanf("%d",&m2);
    printf("\n Columna n=:");
    scanf("%d",&n2);
}
//m es fila y n columna
printf("Ingrese A\n");
for (int i=0;i<m1;i++)
	{
	  for (int j=0;j<n1;j++){
	   printf("a %d%d = ",j+1,i+1);
	   scanf("%d",&A[i][j]);
	   }
    }
printf("Ingrese B\n");
for (int i=0;i<m1;i++)
	{
	  for (int j=0;j<n1;j++){
	   printf("a %d%d = ",j+1,i+1);
	   scanf("%d",&B[i][j]);
	   }
    }

Resta(A,B,C,m1,n1);
}

if (opc == 3)
{
system("clear");
int m1,n1,m2,n2;

printf("Dimensión de A \n Fila m=: ");
scanf("%d",&m1);
printf("\n Columna n=:");
scanf("%d",&n1);
printf("Dimensión de B \n Fila m=: ");
scanf("%d",&m2);
printf("\n Columna n=:");
scanf("%d",&n2);

while ((m1!=m2)||(n1!=n2))
{
	printf("Favor de ingresar dimensiones iguales");
    printf("Dimensión de A \n Fila m=: ");
    scanf("%d",&m1);
    printf("\n Columna n=:");
    scanf("%d",&n1);
    printf("Dimensión de B \n Fila m=: ");
    scanf("%d",&m2);
    printf("\n Columna n=:");
    scanf("%d",&n2);
}
//m es fila y n columna
printf("Ingrese A\n");
for (int i=0;i<m1;i++)
	{
	  for (int j=0;j<n1;j++){
	   printf("a %d%d = ",j+1,i+1);
	   scanf("%d",&A[i][j]);
	   }
    }
printf("Ingrese B\n");
for (int i=0;i<m1;i++)
	{
	  for (int j=0;j<n1;j++){
	   printf("a %d%d = ",j+1,i+1);
	   scanf("%d",&B[i][j]);
	   }
    }



Mult(A,B,C,m1,n1);
}

if (opc == 4)
{
system("clear");
int m1,n1;

printf("Dimensión de A \n Fila m=: ");
scanf("%d",&m1);
printf("\n Columna n=:");
scanf("%d",&n1);

while (m1!=n1)
{
    printf("Favor de ingresar dimensiones iguales");
    printf("Dimensión de A \n Fila m=: ");
    scanf("%d",&m1);
    printf("\n Columna n=:");
    scanf("%d",&n1);
}
//m es fila y n columna
printf("Ingrese A\n");
for (int i=0;i<m1;i++)
	{
	  for (int j=0;j<n1;j++){
	   printf("a %d%d = ",j+1,i+1);
	   scanf("%d",&A[i][j]);
	   }
    }

Sim(A,m1,n1);
}

if (opc == 5)
{
   exit(1);
}
return EXIT_SUCCESS;

}

void Sum(int A[][LIM],int B[][LIM],int C[][LIM],int m1,int n1)
{
printf("El resultado de la suma es: \n"); 
int i;
for (i=0;i<m1;i++)
	{
	  for (int j=0;j<n1;j++){
	   C[i][j]=(A[i][j])+(B[i][j]);
	   }
    }


for (i=0;i<m1;i++)
	{
		for (int j = 0; j<n1; j++)
		{
			printf(" %d  ",C[i][j]);
		}
      printf("\n");
	}
}



void Resta(int A[][LIM],int B[][LIM],int C[][LIM],int m1,int n1)
{
printf("El resultado de la resta es: \n"); 
int i;
for (i=0;i<m1;i++)
	{
	  for (int j=0;j<n1;j++){
	   C[i][j]=(A[i][j])-(B[i][j]);
	   }
    }


for (i=0;i<m1;i++)
	{
		for (int j = 0; j<n1; j++)
		{
			printf(" %d  ",C[i][j]);
		}
      printf("\n");
	}
}

void Mult(int A[][LIM],int B[][LIM],int C[][LIM],int m1,int n1)
{
printf("El resultado de la multiplicación es: \n"); 
int i;
for (i=0;i<m1;i++)
	{
	  for (int j=0;j<n1;j++){
	   C[i][j]=(A[i][j])*(B[i][j]);
	   }
    }


for (i=0;i<m1;i++)
	{
		for (int j = 0; j<n1; j++)
		{
			printf(" %d  ",C[i][j]);
		}
      printf("\n");
	}
}




void Sim(int A[][LIM],int m1,int n1)
{
    int inversaA[LIM][LIM],i,j,contador;
    
    for ( i = 0; i<m1; i++)
    {
        for ( j = 0; j<n1; j++)
        {
            inversaA[i][j]=A[j][i];
        }
    }
    contador=0;
    for ( i = 0; i<m1; i++)
    {
       for ( j = 0; j<n1; j++)
        {
            if(inversaA[i][j]==A[i][j])
            {
              contador++; 
            }
            else{
                 i=n1+i;}
        }
        
    }
    if((m1*n1)==contador)
    {
     printf("Es Simétrica\n");
    }
    else{ 
         printf("No es simetrica\n");
        }
}
