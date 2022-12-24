/*

Simula la función básica del comando head de Linux.

11.c

G:102-C

gcc -Wall 11.c -o 11
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
    FILE *archivo;
    int linea=1,x=10;
    char *letras=NULL,d;
    printf("¿Desea eligir la cantida de ultimos lineas a imprirmir?(s/n)");__fpurge(stdin);scanf("%c",&d);
    if (d=='s')
    {
        printf("n: ");__fpurge(stdin);scanf("%d",&x);
    }
    archivo=fopen(z[i],"rt");
    if ( archivo == NULL )
    {
        perror("error en fopen\n");
        exit(1);
    }
    while (!feof(archivo)&&(linea<=x))
    {
        letras=(char*)malloc(sizeof(char)*241);
        fgets(letras,241,archivo);
        printf("linea(%d):\t%s\n",linea++,letras);        
    } 
    fclose(archivo);
    free(letras);
}
