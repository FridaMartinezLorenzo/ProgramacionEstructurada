/*


Realizar un programa en C que haga la función básica del comando tail de Linux.

10.c

G:102-C

gcc -Wall 10.c -o 10
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio_ext.h>
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
    FILE *archivo,*aux;
    int linea=1,x=10,n=0;
    char *letras=NULL,d;
    printf("¿Desea eligir la cantida de ultimos lineas a imprirmir?(s/n)");__fpurge(stdin);scanf("%c",&d);
    if (d=='s')
    {
        printf("n:");__fpurge(stdin);scanf("%d",&x);
    }
    archivo=fopen(z[i],"rt");
    aux=fopen(z[i],"rt");
    if ( archivo == NULL )
    {
        perror("error en fopen\n");
        exit(1);
    }
    while (!feof(archivo))
    {
        letras=(char*)malloc(sizeof(char)*241);
        fgets(letras,241,archivo);
        n++;
    } 
    free(letras);
    n=n-x;
    while (!feof(aux))
    {
        letras=(char*)malloc(sizeof(char)*241);
        fgets(letras,241,aux);
        if(linea>=n){
            printf("linea(%d):\t%s\n",linea,letras);
        }
        linea++;
    }   
    fclose(archivo);
    fclose(aux);
    free(letras);
}
