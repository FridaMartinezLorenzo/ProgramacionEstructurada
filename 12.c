/*


Simula la función básica del comando mv de Linux.

12.c

G:102-C

gcc -Wall 12.c -o 12
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Argumentos(int,char*[]);
void leer(char*[]);
void copiar(char *[],int);
int main(int x,char *z[])
{
    Argumentos(x,z);
    return EXIT_SUCCESS;
}
void Argumentos(int a,char *b[])
{
    int i=1;
        system("clear");
        printf("Ejecutable=%s\n",b[0]);
        printf("Parametro[%d]=%s\n",i,b[i]);
        getchar();
        copiar(b,i);
        system("clear");
        printf("Ejecutable=%s\n",b[0]);
        printf("Parametro[%d]=%s\n",i,b[i+1]);
        leer(b);

    return;
}
void copiar(char*z[],int i)
{
    FILE *archivo,*archivo2;
    char *letras;
    int linea=0;
    archivo=fopen(z[i],"rt");
    archivo2=fopen(z[i+1],"wt");
    if ( (archivo == NULL )&&(archivo2==NULL))
    {
        perror("error en fopen\n");
        exit(1);
    }
    while (!feof(archivo))
    {
        letras=(char*)malloc(sizeof(char)*241);
        fgets(letras,241,archivo);
        printf("linea(%d):\t%s",linea++,letras);
        fprintf(archivo2,"%s",letras);
    }
    getchar();
    fclose(archivo2);
    fclose(archivo);
    free(letras);
    remove(z[i]);
}
void leer(char *p[])
{
    FILE *archivo;
    char *letras;
    int linea=0;
    archivo=fopen(p[2],"r");
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
