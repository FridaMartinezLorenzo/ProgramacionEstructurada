/*

bUSCA LOS NUMEROS ENCONTRADO EN EL ARREGLO

3.c

G:102-C

gcc -Wall 3.c -o 3
*/
#include <stdio.h>
#include <stdlib.h>

int Buscar(int [],int);
int main()   
{   

    int x[10],n=5,i=0;
    printf("ingrese 10 numeros\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d: ",i+1);scanf("%d",&x[i]);
    }
             //0 1 2 3  4  5  6  7   8   9
    //int x[10]={5,7,8,34,69,78,99,102,33,43};
    int y;
    printf("NUMERO QUE DESEA BUSCAR\n");scanf("%d",&y);
    i=Buscar(x,y);
    if (i!=-1)
    {
        printf("SE ENCUENTRA EN LA POSICION DEL ARREGLO %d.\n",i);
    }else{printf("NO SE ENCUENTRA EN LA CADENA.");}
    return EXIT_SUCCESS;
}
int Buscar(int x[],int y)
{
    int n=0, f=0;
    while((n!=10)&&(f==0))
    {
        
        if(x[n]==y){f=1;}
        n++;
    }
    n=n-1;
    if(x[n]==y){return (n);}else{return (-1);}
}
