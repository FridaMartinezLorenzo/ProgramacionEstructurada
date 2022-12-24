/*


BUSCA UN NUMERO O UNA CADENA EN LA MEMORIA ESTATICA
4.c

G:102-C

gcc -Wall 4.c -o 4
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>
typedef struct dato{
    char nombre[10];
    char paterno[10];
    char materno[10]; 
}DATOS;
#define B 6
void imp(int [],DATOS [],int);
void llenar(DATOS []);
int nombre(DATOS [],char [50],int []);
int nombre_completo(DATOS [],char [50],int []);
int main(){
    int x,flag [10],j;
    char y[50];
    DATOS p[10];
    llenar(p); 

    do
    {__fpurge(stdin);
        //system("clear");
        printf("SOLO PUEDES ELIGIR ESTAS OPCIONES\n"
        "\t-Presione 1 para buscar solamente el nombre\n"
        "\t-Presione 2 para buscar el nombre completo\n");
        scanf("%d",&x);__fpurge(stdin);
    } while ((x<=0)&&(x>3));
    switch (x)
    {
    case 1:printf("Nombre que desea buscar:");scanf("%s",y);__fpurge(stdin);
    j=nombre(p,y,flag);if(j==(-1)){printf("No se encuentra en el registro.");}
    else{j=j+1;imp(flag,p,j);};break;
    
    case 2:printf("Nombre que desea buscar.\n");__fpurge(stdin);gets(y);
    j=nombre_completo(p,y,flag);if(j==(-1)){printf("No se encuentra en el registro.");}
    else{j=j+1;imp(flag,p,j);};break;
    }
    return EXIT_SUCCESS;
}
int nombre(DATOS x[],char y[50],int flag [])
{
    int i=0,j=0;
    while(i!=10)
    {
        if((strcmp(x[i].nombre,y)==0)){flag[j]=i;j++;}
        i++;
    } 
    return (j-1);   
}
int nombre_completo(DATOS x[],char v[50],int flag[])
{
    int i=0,j=0,l,k;
    char y[50];
    while(i!=B)
    {
        l=0;k=0;
        while (x[i].nombre[l]!='\0')
        {
            y[k]=x[i].nombre[l];
            l++;k++;
        }
        y[k]=' ';
        k++;l=0;
        while (x[i].paterno[l]!='\0')
        {
            y[k]=x[i].paterno[l];
            l++;k++;
        }
        y[k]=' ';
        k++;l=0;
        while (x[i].materno[l]!='\0')
        {
            y[k]=x[i].materno[l];
            l++;k++;
        }
        y[k]='\0';
        //printf("%s | %s\n",y,v);
        if((strcmp(y,v)==0)){flag[j]=i;j++;}
        i++;
    }
    return (j-1);    
}
void llenar(DATOS d[])
{
    int i;
    for ( i = 0; i < B; i++)
    {
        printf("Registro %d:\n",i);
    printf("Nombre(s)=");__fpurge(stdin); scanf("%s",d[i].nombre);
    printf("Apellido paterno=");__fpurge(stdin);scanf("%s",d[i].paterno);
    printf("Apellido materno=");__fpurge(stdin);scanf("%s",d[i].materno);
    __fpurge(stdin);
    }
    
}
void imp(int flag[],DATOS p[],int x)
{
    int i,j;
    for ( i = 0; i < x; i++)
    {
        j=flag[i];
        printf("Se encuentra en el registro %d:%s %s %s\n",j,p[j].nombre,p[j].paterno,p[j].materno);
    }
    

}
