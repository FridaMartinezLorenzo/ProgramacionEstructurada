/*


RECIBE REGISTROS Y LO ALMACENA EN UN ARCHIVO, PUEDE BUSCAR EL REGISTRO INSERTANDOLE EL APELLIDO PATERNO
ADEMAS DE PODER ELIMINAR EL ARCHIVO ESCRIBIENDOLE LA CURP.

7.c

G:102-C

gcc -Wall 7.c -o 7
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <string.h>
typedef struct alumnos{
        int n;
        char nombre[35];
        char sexo[10];
        char curp[20]; 
        char mes[15];
        int edad;
        int year;
        int dia;
        struct alumnos *sig;        
    }ALUMNO;

//void Capturar(ALUMNO *);
//void Leer(ALUMNO*);
void escribir(ALUMNO*);
void llenar(ALUMNO);
ALUMNO *CrearNodo(int ,char[],char[],char[],char[],int,int,int);
void capturar(ALUMNO*);
void recorrer(ALUMNO*);
int buscar(ALUMNO*,ALUMNO*[],char []);
void eliminar(ALUMNO*);
void leer(void);
int main()
{
ALUMNO *inicio=NULL,*p=NULL,*q=NULL;
        char n[35],s[10],c[20],m[15],b[15];
        int e,a,d;

    int i=0,x,j;
    char op;
    do
    {
            printf("---------Registro No. %d--------\n",i+1);
            printf("Nombre: ");__fpurge(stdin);fgets(n,35,stdin);
            x=strlen(n);x=x-1;n[x]='\0';
            printf("Sexo: ");__fpurge(stdin);scanf("%s",s);
            printf("edad: ");__fpurge(stdin);scanf("%d",&e);
            printf("curp: ");__fpurge(stdin);scanf("%s",c);
            printf("Fecha de nacimiento\nDias: ");__fpurge(stdin);scanf("%d",&d);
            printf("Mes: ");__fpurge(stdin);scanf("%s",m);
            printf("año: ");__fpurge(stdin);scanf("%d",&a);
            __fpurge(stdin);
        if(inicio==NULL)
        {

            inicio=CrearNodo(i,n,s,c,m,e,d,a);
            p=inicio;
        }else{
            q=CrearNodo(i,n,s,c,m,e,d,a);
            p->sig=q;
            p=q;
        }
        printf("otro dato(s/n):");scanf("%c",&op);__fpurge(stdin);
        i++;
    }while(op!='n');
    ALUMNO *f[i];       
//LECTURA DE ARCHIVO
//recorrer(inicio);
system("clear");
escribir(inicio);
leer();
//recorrer(inicio);
printf("\n");
char k,l;
printf("¡Desea buscar?(s/n)");__fpurge(stdin);scanf("%c",&k);
if (k=='s')
{
    printf("Que apellido desea buscar\n");scanf("%s",b);
    x=buscar(inicio,f,b);
    printf("\n");
    if(x!=-1){printf("Numero de registros encontrados =%d\n",x);
    for (j = 0; j<x; j++)
    {
        printf("------------------------------------\n");
        printf("Registro No.%d\n",f[j]->n);   
        printf("Nombre:%s\n",f[j]->nombre);
        printf("Sexo:%s\n",f[j]->sexo);
        printf("Edad:%d\n",f[j]->edad);
        printf("CURP:%s\n",f[j]->curp);
        printf("Fecha de nacimiento:%d/%s/%d\n",f[j]->dia,f[j]->mes,f[j]->year);   
    }
    }else{printf("No se a econtrado en el registro");}
}
printf("¿Desea eliminar algun registro(s/n)?");;__fpurge(stdin);scanf("%c",&l);
if(l=='s'){
    eliminar(inicio);
    //recorrer(inicio);
    escribir(inicio);
    leer();
}
return EXIT_SUCCESS;   
}
ALUMNO *CrearNodo(int x,char n[],char s[],char c[],char m[],int e,int d,int a)
{
    ALUMNO *new;
    new=(ALUMNO *)malloc(sizeof(ALUMNO));
    new->n=x+1;
    strcpy(new->nombre,n);
    strcpy(new->sexo,s);
    strcpy(new->curp,c);
    new->edad=e;
    new->dia=d;
    strcpy(new->mes,m);
    new->year=a;
    new->sig=NULL;
    return new;
}
void escribir(ALUMNO*p){
    FILE* archivo;
    ALUMNO *a=NULL;
    a=p;
    int i=0;     
    archivo = fopen("Registro.txt","wt");
    while (a!=NULL)
    {
     fprintf(archivo,"Registro No.%d\n",a->n);   
     fprintf(archivo,"Nombre:%s\n",a->nombre);
     fprintf(archivo,"Sexo:%s\n",a->sexo);
     fprintf(archivo,"Edad:%d\n",a->edad);
     fprintf(archivo,"CURP:%s\n",a->curp);
     fprintf(archivo,"Fecha de nacimiento:%d/%s/%d\n",a->dia,a->mes,a->year);  
     a=a->sig;i++; 
    }
    fprintf(archivo,"-----------FIN DEL REGISTRO------------");   
    fclose(archivo);     printf("Proceso completado\n");
}
void recorrer(ALUMNO *p)
{
    ALUMNO *i=p;
    int j=0;
    printf("Dato dado\n");
    do
    {
     printf("------------------------------------\n");
     printf("Registro No.%d\n",i->n);   
     printf("Nombre:%s\n",i->nombre);
     printf("Sexo:%s\n",i->sexo);
     printf("Edad:%d\n",i->edad);
     printf("CURP:%s\n",i->curp);
     printf("Fecha de nacimiento:%d/%s/%d\n",i->dia,i->mes,i->year);
        i=i->sig;j++;
    }while (i!=NULL);
    return;
}
int buscar(ALUMNO *p,ALUMNO *f[],char b[])
{
    ALUMNO *a=NULL;
    int x,i=0,n=0;
    a=p;
    char c[20];
    printf("sad\n");
    while (a!=NULL)
    {
        x=0;i=strlen(a->nombre);
        while (x<2)
        {
            printf("%c",a->nombre[i]);
            if(a->nombre[i]==' ')
            {
                x++;
            }
            printf("%d",x);
            i--;
        }
        printf("\n");
        i=i+2;
        x=0;
        while (a->nombre[i]!=' ')
        {
            c[x]=a->nombre[i];
            x++;i++;
        }
        c[x]='\0';
        printf("c=%s b=%s\n",c,b);
        if (strcmp(c,b)==0)
        {
            f[n]=a;
            n++;
        }
        printf("%d\n",n);
        a=a->sig;
        
    }
    return (n);
}
void eliminar(ALUMNO *p)
{
    char f[20],flag=0;
    ALUMNO *a=NULL,*ant=NULL,*s=NULL;
    printf("Dame el CURP DEL QUE DESEA ELIMINAR\n");scanf("%s",f);
    if(strcmp(p->curp,f)==0)
        {
            a=p;
            p=p->sig;
            free(a);
            flag=1;
        }
    ant=p;a=p->sig;
    s=a->sig;
    while ((a!=NULL)&&(flag==0))
    {
        printf("f=%s b=%s\n",f,a->curp);
            if(strcmp(a->curp,f)==0)
            {
                ant->sig=s;
                free(a);
                flag=1;
            }
            
    }   
    
}
void leer(void)
{
    FILE *archivo;
    char *letras;
    int linea=0;
    archivo=fopen("Registro.txt","r");
    if ( archivo == NULL )
    {
        perror("error en fopen\n");
        exit(1);
    }
    while (!feof(archivo))
    {
        letras=(char*)malloc(sizeof(char)*241);
        fgets(letras,241,archivo);
        printf("linea(%d):\t%s",linea++,letras);getchar();
    }
    fclose(archivo);
    free(letras);
    return EXIT_SUCCESS;
}
