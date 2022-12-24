/*


SIMULA LO BASICO DEL COMANDO CAT

8.c

G:102-C

gcc -Wall 8.c -o 8
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Argumentos(int,char*[]);
void leer(char *[],int);
int main(int x,char *z[])
{
    Argumentos(x,z);
    return EXIT_SUCCESS;
}
void Argumentos(int a,char *b[])
{
    int i=1;
    for ( ; i < a; i++){
        system("clear");
        printf("Ejecutable=%s\n",b[0]);
        printf("Parametro[%d]=%s\n",i,b[i]);
        getchar();
        leer(b,i);}
    return;
}
void leer(char*z[],int i)
{
    FILE *archivo;
    char *letras;
    int linea=0;
    archivo=fopen(z[i],"rt");
    if ( archivo == NULL )
    {
        perror("error en fopen\n");
        exit(1);
    }
    while (!feof(archivo))
    {
        letras=(char*)malloc(sizeof(char)*241);
        fgets(letras,241,archivo);
        printf("linea(%d):\t%s",linea++,letras);
    }
    getchar();
    fclose(archivo);
    free(letras);
}
