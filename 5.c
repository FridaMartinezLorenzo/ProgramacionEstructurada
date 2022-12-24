/*


ORDENA las cadenas o los numeros que se encuentran en la memoria dinamica
5.c

G:102-C

gcc -Wall 5.c -o 5
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>
typedef struct dato{
    char nombre[20];
    char paterno[20];
    char materno[20]; 
    struct dato *sig;     
}DATOS;
typedef struct dato1{
    int n;
    struct dato1 *sig;     
}DATOS1;
DATOS *CrearNodo(char[],char[],char[]);
void punteroacadena(DATOS*,DATOS* [],int );
void recorrer(DATOS *);
void selecion(DATOS *);
void burbuja(DATOS*);
void insercion(int,DATOS*[]);
DATOS1 *CrearNodo1(int );
void copiar_punteroacadena1(DATOS1*,DATOS1* [],int );
void recorrer1(DATOS1 *);
void selecion1(DATOS1 *);
void burbuja1(DATOS1*);
void insercion1(int,DATOS1*[]);
void cadena(void);
void numero(void);
int main()
{
    printf("Que desea ordenar\n1.numero\n2.cadena\n");
    int x;
    scanf("%d",&x);
    switch (x)
    {
    case 1:numero();break;
    case 2:cadena();break;
    
    
    }
    return EXIT_SUCCESS;
}
void numero(void)
{
    DATOS1 *inicio=NULL,*p=NULL,*q=NULL;
    int n,i=0;
    char op;
    do
    {
        printf("Numero=");__fpurge(stdin); scanf("%d",&n);__fpurge(stdin);
        if(inicio==NULL)
        {
            inicio=CrearNodo1(n);
            p=inicio;
            
    

        
        }else{
            q=CrearNodo1(n);
            p->sig=q;
            p=q;
        }
        printf("otro dato(s/n):");scanf("%c",&op);__fpurge(stdin);
        i++;
    }while(op!='n');
    int y;
   do
    {
        system("clear");
        printf("SOLO PUEDES ELIGIR ESTAS OPCIONES\n"
        "\t-Presione 1 Ordenamiento de Selecion\n"
        "\t-Presione 2 Ordenamiento de Burbuja\n"
        "\t-Presione 3 Ordenamiento de Insercion\n");
        __fpurge(stdin);
        scanf("%d",&y);
    }while((y<=0)||(y>3));
    printf("i=%d",i);
    DATOS1 *o[i];
    printf("DATOS DADOS:\n");
    recorrer1(inicio);
    printf("Opcion de selecion=%d\n",y);
    switch(y){
    case 1:selecion1(inicio);printf("Lista ordenada:\n");recorrer1(inicio);break;
    case 2:burbuja1(inicio);printf("Lista ordenada:\n");recorrer1(inicio);break;
    case 3:printf("s--");copiar_punteroacadena1(inicio,o,i);printf("Lista ordenada:\n");insercion1(i,o);recorrer1(inicio);break;
    }
}
void cadena(void)
{
    DATOS *inicio=NULL,*p=NULL,*q=NULL;
    int i=0;
    char op,n[20],ap[20],am[20];
    do
    {
        printf("Nombre(s)=");__fpurge(stdin);scanf("%s",n);
        printf("Apellido paterno=");__fpurge(stdin);scanf("%s",ap);
        printf("Apellido materno=");__fpurge(stdin);scanf("%s",am);
        __fpurge(stdin);
        if(inicio==NULL)
        {
            inicio=CrearNodo(n,ap,am);
            p=inicio;
            
    

        
        }else{
            q=CrearNodo(n,ap,am);
            p->sig=q;
            p=q;
        }
        printf("otro dato(s/n):");scanf("%c",&op);__fpurge(stdin);
        i++;
    }while(op!='n');
    int y;
   do
    {
        printf("SOLO PUEDES ELIGIR ESTAS OPCIONES\n"
        "\t-Presione 1 Ordenamiento de Selecion\n"
        "\t-Presione 2 Ordenamiento de Burbuja\n"
        "\t-Presione 3 Ordenamiento de Insercion\n");
        scanf("%d",&y);
    }while((y<=0)||(y>3));
    DATOS *o[i];
    printf("DATOS DADOS:\n");
    recorrer(inicio);
    printf("Opcion de selecion=%d\n",y);
    switch(y){
    case 1:selecion(inicio);printf("Lista ordenada:\n");recorrer(inicio);break;
    case 2:burbuja(inicio);printf("Lista ordenada:\n");recorrer(inicio);break;
    case 3:punteroacadena(inicio,o,i);printf("Lista ordenada:\n");insercion(i,o);recorrer(inicio);break;
    }
}
void selecion1(DATOS1 *p)
{
    int aux2,menor;
    DATOS1 *a=NULL,*s=NULL,*aux=p;
    a=p;
    while (a->sig!=NULL)
    {
        menor=a->n;
        aux=a;
        s=a->sig;
        while (s!=NULL)
        {
            if (s->n<menor)
            {
                menor=s->n;
                aux=s;
            }
        s=s->sig;  
        } 
        aux2=a->n;a->n=aux->n;aux->n=aux2; 
        a=a->sig;
    }
}
void burbuja1(DATOS1 *p)
{
    int aux2;
    DATOS1 *a=NULL,*s=NULL,*aux=NULL,*i=NULL;
    a=p;
    while (a!=NULL)
    {
        //printf("____________recorrido______________\n");
        i=p->sig;s=p;
        //printf("i=%p s=%p\n",i,s);
        while (i!=NULL)
        {
            //printf("recorrido intrno___\n");
            aux=s->sig;//printf("aux %p\n",aux);
            if (s->n>aux->n)
            {
                aux2=s->n;
                s->n=aux->n;
                aux->n=aux2;
            }
        s=s->sig;i=i->sig;  
        }
         
        a=a->sig;
    }
}    
void insercion1(int n,DATOS1 *a[])
{
    int i,j,aux;
    for(i=1;i<n;i++)
    {
        j=i;
        aux=a[i]->n;
        while((j>0)&&(a[j-1]->n>aux))
        {    
            a[j]->n=a[j-1]->n;
            j--;        
        }   
        a[j]->n=aux;

    }
    printf("j\n");
  
}
/*void imp(int n,DATOS *a[])
{
    int i;
    printf("\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d%c ",a[i],a[i]);
    }
    printf("\n");  
}*/
DATOS1 *CrearNodo1(int x)
{
    DATOS1 *new;
    new=(DATOS1 *)malloc(sizeof(DATOS1));
    new->n=x;
    new->sig=NULL;
    return new;
}
void recorrer1(DATOS1 *p)
{
    DATOS1 *i=p;
    do
    {
        printf("Dirrecion %p\t %d\t Sig:%p\n",i,i->n,i->sig);
        i=i->sig;
    }while (i!=NULL);
    return;
}
void copiar_punteroacadena1(DATOS1 *i, DATOS1 *p[],int x)
{
    int j;
    DATOS1 *a=NULL;
    a=i;
    printf("g");
    for ( j = 0;j<x; j++)
    {
        p[j]=a;
        a=a->sig;
    }
}
//cadena
void selecion(DATOS *p)
{
    
    char menor[20],aux2[20];
    DATOS *a=NULL,*s=NULL,*aux=p;
    a=p;
    while (a->sig!=NULL)
    {
        strcpy(menor,a->paterno);
        aux=a;
        s=a->sig;
        while (s!=NULL)
        {
            if (strcmp(menor,s->paterno)>0)
            {
                strcpy(menor,s->paterno);
                aux=s;
            }
        s=s->sig;  
        } 
        strcpy(aux2,a->nombre);strcpy(a->nombre,aux->nombre);strcpy(aux->nombre,aux2);
        strcpy(aux2,a->paterno);strcpy(a->paterno,aux->paterno);strcpy(aux->paterno,aux2);
        strcpy(aux2,a->materno);strcpy(a->materno,aux->materno);strcpy(aux->materno,aux2);        
        a=a->sig;
    }
}
void burbuja(DATOS *p)
{
    char aux2[20];
    DATOS *a=NULL,*s=NULL,*aux=NULL,*i=NULL;
    a=p;
    while (a!=NULL)
    {
        //printf("____________recorrido______________\n");
        i=p->sig;s=p;
        //printf("i=%p s=%p\n",i,s);
        while (i!=NULL)
        {
            //printf("recorrido intrno___\n");
            aux=s->sig;//printf("aux %p\n",aux);
            if (strcmp(s->paterno,aux->paterno)>0)
            {
                strcpy(aux2,s->paterno);
                strcpy(s->paterno,aux->paterno);
                strcpy(aux->paterno,aux2);
            }
        s=s->sig;i=i->sig;  
        }
         
        a=a->sig;
    }
}    
void insercion(int n,DATOS *a[])
{
    int i,j;
    char aux[20];
    for(i=1;i<n;i++)
    {
        j=i;
        strcpy(aux,a[i]->paterno);
        while((j>0)&&(strcmp(a[j-1]->paterno,aux)>0))
        {    
            strcpy(a[j]->paterno,a[j-1]->paterno);
            j--;        
        }   
        strcpy(a[j]->paterno,aux);
    }
}
DATOS *CrearNodo(char n[],char ap[],char am[])
{
    DATOS *new;
    new=(DATOS *)malloc(sizeof(DATOS));
    strcpy(new->nombre,n);
    strcpy(new->paterno,ap);
    strcpy(new->materno,am);
    new->sig=NULL;
    return new;
}
void recorrer(DATOS *p)
{
    DATOS *i=p;
    do
    {
        printf("Dirrecion %p\t NOMBRE;%s\t %s\t %s\t Sig:%p\n",i,i->paterno,i->materno,i->nombre,i->sig);
        i=i->sig;
    }while (i!=NULL);
    return;
}
void punteroacadena(DATOS *i, DATOS *p[],int x)
{
    int j;
    DATOS *a=NULL;
    a=i;

    for ( j = 0;j<x; j++)
    {
        p[j]=a;
        a=a->sig;
    }
}
