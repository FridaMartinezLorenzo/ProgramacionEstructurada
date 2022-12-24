/*


BUSCA EL NUMERO O CADENA DE LA MEMORIA DINAMICA
6.c

G:102-C

gcc -Wall 6.c -o 6
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>
typedef struct dato{
    int i;
    char nombre[10];
    char paterno[10];
    char materno[10]; 
    struct dato *sig;     
}DATOS;
typedef struct dato1{
    int n;
    struct dato1 *sig;     
}DATOS1;
void recorrer1(DATOS1 *);
DATOS1 *CrearNodo1(int );
int Buscar1(DATOS1*,DATOS1*[],int);
void numero();
void cadena();

int main()
{   
     int x=0;
    // printf("vjjv");
     printf("Que desea buscar\n1.numero\n2.cadena\n");
        __fpurge(stdin);
    scanf("%d",&x);
    switch (x)
    {
    case 1:numero();break;
    case 2:cadena();break;    
    }
    return EXIT_SUCCESS;
}
void numero()
{
    DATOS1 *inicio=NULL,*p=NULL,*q=NULL;
    int n,i,y;
    char op;
    do
    {
        __fpurge(stdin);
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

    DATOS1 *flag[i];
    printf("NUMERO QUE DESEA BUSCAR\n");scanf("%d",&y);
    n=Buscar1(inicio,flag,y);
    printf("DATO REGITRADO:\n");
    recorrer1(inicio);
    printf("Se ha encontrado %d\n",n);
    if(n!=-1){
    for ( i = 0; i!=n; i++)
    {
            printf("SE ENCUENTRA EN LA DIRECCION %p Y CONTIENE: %d.\n",flag[i],flag[i]->n);
    }
    }else{printf("NO SE ENCUENTRA EN LA MEMORIA.");}
}
int Buscar1(DATOS1 *x,DATOS1*flag[],int y)
{
    int i=0;
    DATOS1 *s=x;
    while(s!=NULL)
    {
        
        if(s->n==y){flag[i]=s;flag[i]->n=s->n;i++;}
        s=s->sig;
    }
    if(i==0){return (-1);}else{return(i);}
}
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
void recorrer(DATOS *);
DATOS *CrearNodo(char[],char[],char[],int);
int nombre_completo(DATOS *,DATOS*[],DATOS );
int nombre(DATOS*,DATOS*[],DATOS);
void cadena()
{
DATOS *inicio=NULL,*p=NULL,*q=NULL,y;
    int i=0,x,v;
    char op,n[20],ap[20],am[20];
    do
    {
        printf("Nombre(s)=");__fpurge(stdin);scanf("%s",n);
        printf("Apellido paterno=");__fpurge(stdin);scanf("%s",ap);
        printf("Apellido materno=");__fpurge(stdin);scanf("%s",am);
        __fpurge(stdin);
        if(inicio==NULL)
        {
            inicio=CrearNodo(n,ap,am,i);
            p=inicio;
        }else{
            q=CrearNodo(n,ap,am,i);
            p->sig=q;
            p=q;
        }
        printf("otro dato(s/n):");scanf("%c",&op);__fpurge(stdin);
        i++;
    }while(op!='n');
    DATOS *flag[i];
    do
    {
        //system("clear");
        printf("SOLO PUEDES ELIGIR ESTAS OPCIONES\n"
        "\t-Presione 1 para buscar solamente el nombre\n"
        "\t-Presione 2 para buscar el nombre completo\n");
        scanf("%d",&v);
    } while ((v<=0)&&(v>3));
    switch (v)
    {
    case 1:printf("Nombre que desea buscar:");scanf("%s",y.nombre);
    x=nombre(inicio,flag,y);printf("DATO REGITRADO:\n");recorrer(inicio);
    if(x!=-1){printf("Se ha encontrado %d\n",x);
    for ( i = 0; i!=x; i++)
    {
        printf("%d SE ENCUENTRA EN LA DIRECCION %p Y CONTIENE: %s %s %s.\n",i+1,flag[i],flag[i]->nombre,flag[i]->paterno,flag[i]->materno);
    }
    }else{printf("NO SE ENCUENTRA EN LA MEMORIA.");};break;
    
    case 2:printf("Nombre que desea buscar.\nNombre:");
    scanf("%s",y.nombre);__fpurge(stdin);printf("Apellido paterno:");
    scanf("%s",y.paterno);printf("Apellido materno:");scanf("%s",y.materno);
    x=nombre_completo(inicio,flag,y);printf("DATO REGITRADO:\n");recorrer(inicio);
    if(x!=-1){printf("Se ha encontrado %d\n",x);
    for ( i = 0; i!=x; i++)
    {
        printf("SE ENCUENTRA EN LA DIRECCION %p Y CONTIENE: %s %s %s.\n",flag[i],flag[i]->nombre,flag[i]->paterno,flag[i]->materno);
    }
    }else{printf("NO SE ENCUENTRA EN LA MEMORIA.");};break;
    }    
}
int nombre(DATOS *x,DATOS*flag[],DATOS y)
{
    int i=0;
    DATOS *s=x;
    while(s!=NULL)
    {
        if(strcmp(s->nombre,y.nombre)==0){flag[i]=s;i++;}
        s=s->sig;
    }
    if(i==0){return (-1);}else{return(i);}
}
int nombre_completo(DATOS *x,DATOS*flag[],DATOS y)
{
    int i=0;
    DATOS *s=x;
    while(s!=NULL)
    {
        if((strcmp(s->nombre,y.nombre)==0)&&(strcmp(s->paterno,y.paterno)==0)&&(strcmp(s->materno,y.materno)==0))
        {flag[i]=s;i++;}
        s=s->sig;
    }
    if(i==0){return (-1);}else{return(i);}
}
DATOS *CrearNodo(char n[],char ap[],char am[],int x)
{
    DATOS *new;
    new=(DATOS *)malloc(sizeof(DATOS));
    new->i=x;
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
        printf("Dirrecion %p\t%s %s %s\t Sig:%p\n",i,i->nombre,i->paterno,i->materno,i->sig);
        i=i->sig;
    }while (i!=NULL);
    return;
}
