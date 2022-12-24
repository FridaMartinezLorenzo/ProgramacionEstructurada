/*


Realizar un programa en C que haga la función básica del comando GREP de Linux.

grep.c

G:102-C

gcc -Wall grep.c -o grep
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Argumentos(int,char*[]);
void leer(char *[],int,char*);
int buscar(char *,char*);
int main(int x,char *z[])
{
    Argumentos(x,z);
    printf("ENTER para salir");
    getchar();
    return EXIT_SUCCESS;
}
void Argumentos(int a,char *b[])
{
    char *p;
    p=(char*)malloc(sizeof(char)*10);
    printf("letra que desea buscar\n");
    scanf("%s",p);
    int i=1;
    for ( ; i < a; i++){
        printf("Ejecutable=%s\n",b[0]);
        printf("Parametro[%d]=%s\n",i,b[i]);
        printf("ENTER PARA CONTINUAR");
        getchar();
        leer(b,i,p);}
    return;
}
void leer(char*z[],int i,char *p)
{
    FILE *archivo;
    int linea=1,x,n=0;
    char *letras=NULL;
    
    archivo=fopen(z[i],"rt");
    if ( archivo == NULL )
    {
        perror("error en fopen\n");
        exit(1);
    }
    printf("Resultado\n");
    while (!feof(archivo))
    {
        x=0;
        letras=(char*)malloc(sizeof(char)*241);
        fgets(letras,241,archivo);
        x=buscar(letras,p);
        if(x==1){
            printf("linea(%d):\t%s\n",linea,letras);n++;
        }
        linea++;
    }
    if(n==0)printf("Niguno\n");
    
    fclose(archivo);
    free(letras);
}
int buscar(char *letras,char *k)
{
    char *a=NULL;
    int x=0,n=0,i,m;
    a=letras;
    x=strlen(letras);
    //printf("letras: %s",letras);
    //printf("%d\n",x);
    a[x-1]='\0';
    char c[x];
    //printf("%d",x);
    m=x;
    x=0;
    while ((x<m)&&(n==0))
    {
        i=0;
        c[i]='\0';
        while ((a[x]!=' ')&&(x<m)&&(a[x]!='(')&&(a[x]!=')')&&(a[x]!='"')&&(a[x]!=',')&&(a[x]!='=')&&(a[x]!=';')&&(a[x]!='{')&&(a[x]!='}')&&(a[x]!='[')&&(a[x]!=']'))
        {
            c[i]=a[x];
            //printf("x=%d c=%c | a=%c\n",i,c[i],a[x]);
            x++;i++;
        }
        c[i]='\0';
        x++;
        //printf("--------%s %s-------\n",c,k);
        if (strcmp(c,k)==0)
        {
            n=1;
        }
    }
    return (n);
}
