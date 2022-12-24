/*


Realizar un programa en C que haga la función básica del comando CAT de Linux.

cat.c

G:102-C

gcc -Wall cat.c -o cat
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Argumentos(int,char*[]);
void leer(char *[],int);

int main(int argv,char *argc[])
{
    Argumentos(argv,argc);
    return EXIT_SUCCESS;
}
void Argumentos(int a,char *b[])
{
    int i=1;
    for ( ; i < a; i++){
        system("clear");
        printf("Archivo:");
        printf("Presione enter para visualizar contenido");getchar();
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
        letras=(char*)malloc(sizeof(char)*240);
        fgets(letras,240,archivo);
        printf("linea(%d):\t%s",linea++,letras);
    }
    
    printf("Presione enter para visualizar el siguiente archivo");getchar();
    fclose(archivo);
    free(letras);
}
