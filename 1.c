/*

ORDENA LOS NUMEROS YA ENCONTRADOS EN LA CADENA
3.c

G:102-C

gcc -Wall 3.c -o 3
*/
#include <stdlib.h>
#include <stdio.h>
void selecion(int ,int []);
void burbuja(int ,int []);
void insercion(int ,int []);
void imp(int,int []);   
int main()
{
    int a[10],n=10,x,i=0,h;
    printf("ingrese 10 numeros\n");
    for ( i = 0; i < n&&h!=1; i++)
    {
        printf("%d: ",i+1);scanf("%d",&a[i]); h=0;
    }
    //int a[10]={113,119,101,114,116,121,117,105,111,112},n=10,x;
    do
    {
        //system("clear");
        printf("SOLO PUEDES ELIGIR ESTAS OPCIONES\n"
        "\t-Presione 1 Ordenamiento de Selecion\n"
        "\t-Presione 2 Ordenamiento de Burbuja\n"
        "\t-Presione 3 Ordenamiento de Insercion\n");
        scanf("%d",&x);
    } while ((x<=0)&&(x>4));
    switch (x)
    {
    case 1:selecion(n,a);printf("Lista ordenada:");imp(n,a);break;
    case 2:burbuja(n,a);printf("Lista ordenada:");imp(n,a);break;
    case 3:insercion(n,a);printf("Lista ordenada:");imp(n,a);break;
    }
    
    return EXIT_SUCCESS;
}
void selecion(int n,int a[10])
{
    int i,j,aux,menor;
    for(i=0;i<n;i++)
    {
        menor=i;
        for (j = i+1; j < n; j++)
        {
            if (a[j]<a[menor])
            {
                menor=j;
            }
              
        }   
        if(i!=menor)
        {aux=a[i];a[i]=a[menor];a[menor]=aux;} 
    }
}
void burbuja(int n,int a[10])
{
    int i,j,aux;
    for(i=0;i<n;i++)
    {
        for (j = 0; j < n-1; j++)
        {
            if(a[j]>a[j+1])
            {
               aux=a[j];
               a[j]=a[j+1];
               a[j+1]=aux;         
            }
        }  
       
    }
}
void insercion(int n,int a[10])
{
    int i,j,aux;
    for(i=1;i<n;i++)
    {
        j=i;
        aux=a[i];
        while((j>0)&&(a[j-1]>aux))
        {    
            a[j]=a[j-1];
            j--;     
        }   
        a[j]=aux;
    }
}
void imp(int n,int a[10])
{
    int i;
    printf("\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");  
}
