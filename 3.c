/*



ORDENA ALFABETICAMENTE, BASANDOSE EN LOS APELLIDOS PATERNOS

3.c
 
gcc -Wall 3.c -o 3.c
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>
#define B 3
typedef struct dato{
    char nombre[10];
    char paterno[10];
    char materno[10]; 
}DATOS;
void selecion(int ,DATOS []);    
void burbuja(int ,DATOS []);
void insercion(int ,DATOS []);
void imp(DATOS []);
void llenar(DATOS []);
int main()
{
    int n=10,x;
    DATOS p[10];
    llenar(p);
    imp(p);  
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
    case 1:selecion(n,p);imp(p);break;
    case 2:burbuja(n,p);imp(p);break;
    case 3:insercion(n,p);imp(p);break;
    }
    
    return EXIT_SUCCESS;
}
void selecion(int n, DATOS p[])
{
    int i,j,menor,a,b;
    char aux[10];
    for(i=0;i<B;i++)
    {
        menor=i;
        for (j = i+1; j < B; j++)
        {
            //a=p[j].paterno[0];b=p[menor].paterno[0];

            if ((p[j].paterno[0])<(p[menor].paterno[0])/*a<b*/)
            {
                menor=j;
            }
              
        }   
        if(i!=menor)
        {strcpy(aux,p[i].nombre);strcpy(p[i].nombre,p[menor].nombre);strcpy(p[menor].nombre,aux);
        strcpy(aux,p[i].paterno);strcpy(p[i].paterno,p[menor].paterno);strcpy(p[menor].paterno,aux);
        strcpy(aux,p[i].materno);strcpy(p[i].materno,p[menor].materno);strcpy(p[menor].materno,aux);} 
    }
}
void burbuja(int n,DATOS *p)
{
    int i,j/*,a,b*/,y=0;
    char aux[10],aux3[40];
    for(i=0;i<B;i++)
    {
        
        for (j = 0; j < B-1; j++)
        {
            //a=p[j].paterno[0];b=p[j+1].paterno[0];
            //if((p[j].paterno[0])>(p[j+1].paterno[0])/*a>b*/)
            if(strcmp((p[j].paterno),(p[j+1].paterno))>0)
            {
                /*se ordena por apellido paterno y se muestra como apellido paterno y nombre*/
                strcpy(aux,p[j].nombre);strcpy(p[j].nombre,p[j+1].nombre);strcpy(p[j+1].nombre,aux);
                strcpy(aux,p[j].paterno);strcpy(p[j].paterno,p[j+1].paterno);strcpy(p[j+1].paterno,aux);
                strcpy(aux,p[j].materno);strcpy(p[j].materno,p[j+1].materno);strcpy(p[j+1].materno,aux);  
                i=1;    
            }

        }  
       
    }
}
void insercion(int n,DATOS a[])
{
    int i,j,x,y;
    char aux[10],aux2[10],aux3[10];

    for(i=1;i<B;i++)
    {
        j=i;
        strcpy(aux,a[i].nombre); //aux=a[i];
        strcpy(aux2,a[i].paterno);
        strcpy(aux3,a[i].materno);
        //x=a[j-1].paterno[0];y=aux2[0];
        while((j>0)&&((x=a[j-1].paterno[0])>(aux2[0])/*x>y/*a[j-1]>aux*/))
        {    
            //a[j]=a[j-1];
            strcpy(a[j].nombre,a[j-1].nombre);
            strcpy(a[j].paterno,a[j-1].paterno);
            strcpy(a[j].materno,a[j-1].materno);
            j--;
            //x=a[j-1].paterno[0];y=aux2[0];        
        } 
        strcpy(a[j].nombre,aux);
        strcpy(a[j].paterno,aux2);
        strcpy(a[j].materno,aux3);  
        //a[j]=aux;
    }
}
void imp(DATOS p[])
{
    int i;
    printf("\n");
    for ( i = 0; i < B; i++)
    {
        printf("%s %s %s\n",p[i].paterno,p[i].materno,p[i].nombre);
    }
    printf("\n");  
}
void llenar(DATOS d[])
{
    int i;
    for ( i = 0; i < B; i++)
    {
    printf("Nombre(s)=");__fpurge(stdin); scanf("%s",d[i].nombre);
    printf("Apellido paterno=");__fpurge(stdin);scanf("%s",d[i].paterno);
    printf("Apellido materno=");__fpurge(stdin);scanf("%s",d[i].materno);
    __fpurge(stdin);
    }
    
}
