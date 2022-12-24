#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio_ext.h>

typedef struct argumento
{
  char *a;
  struct argumento *sig;
} ARGUMENTO;

//PROTOTIPADOS FUNCION PRINCIPAL
ARGUMENTO *CrearNodo (char *);
void Imprimir (ARGUMENTO *);
int Identificar (ARGUMENTO *);
int Menu (int, int, ARGUMENTO *);
//PROTOTIPADOS FUNCIONES MENU
int CATfunction (int, ARGUMENTO *);
int CATinterior (ARGUMENTO *);
void EXITfunction (void);
int GREPfunction (int, ARGUMENTO *);
int Buscar (char *, char *);
int HEADfunction (int, ARGUMENTO *);
int MVfunction (int, ARGUMENTO *);
int Transfer (ARGUMENTO *, int);
int TAILfunction (int, ARGUMENTO *);
//FUNCION PRINCIPAL
int
main ()
{
  system ("clear");
  char c;
  int flag = 0, numargu = 0;
  ARGUMENTO *inicio = NULL, *p = NULL, *q = NULL;
  char *argu = NULL, *start = NULL;
  argu = (char *) malloc (sizeof (char));
  start = argu;
  printf ("\033[36m \033[1m~$> \033[0m");	//prompt
  do
    {
      c = getc (stdin);
      if (flag == 0)
	{
	  if (isspace (c) == 0)
	    {
	      *argu = c;
	      argu++;
	    }
	  else
	    {
	      flag = 1;
	      *argu = '\0';
	    }
	}

      if (flag == 1)
	{
	  numargu++;
	  if (inicio == NULL)
	    {
	      inicio = CrearNodo (start);
	      p = inicio;
	    }
	  else
	    {
	      q = CrearNodo (start);
	      p->sig = q;
	      p = q;
	    }

	  argu = start;
	  flag = 0;
	}
    }
  while (c != '\n');
  int process, exito;
  process = Identificar (inicio);
  exito = Menu (process, numargu, inicio);
  do
    {
      inicio = NULL;
      numargu = 0;
      argu = (char *) malloc (sizeof (char));
      start = argu;
      printf ("\033[36m \033[1m~$> \033[0m");	//prompt
      do
	{
	  c = getc (stdin);
	  if (flag == 0)
	    {
	      if (isspace (c) == 0)
		{
		  *argu = c;
		  argu++;
		}
	      else
		{
		  flag = 1;
		  *argu = '\0';
		}
	    }

	  if (flag == 1)
	    {
	      numargu++;
	      if (inicio == NULL)
		{
		  inicio = CrearNodo (start);
		  p = inicio;
		}
	      else
		{
		  q = CrearNodo (start);
		  p->sig = q;
		  p = q;
		}

	      argu = start;
	      flag = 0;
	    }
	}
      while (c != '\n');
      process = Identificar (inicio);
      exito = Menu (process, numargu, inicio);
    }
  while ((process != 2) || (exito != 1));
  return 1;
}

ARGUMENTO *
CrearNodo (char *argu)
{

  ARGUMENTO *new;
  new = (ARGUMENTO *) malloc (sizeof (ARGUMENTO));
  new->a = (char *) malloc (sizeof (char));
  strcpy (new->a, argu);
  new->sig = NULL;
  return new;
}


int
Identificar (ARGUMENTO * inicio)
{
  char C[4];
  C[0] = 'C';
  C[1] = 'A';
  C[2] = 'T';
  C[3] = '\0';
  char E[5];
  E[0] = '\0';
  E[0] = 'E';
  E[1] = 'X';
  E[2] = 'I';
  E[3] = 'T';
  E[4] = '\0';
  char G[5];
  G[0] = '\0';
  G[0] = 'G';
  G[1] = 'R';
  G[2] = 'E';
  G[3] = 'P';
  G[4] = '\0';
  char H[5];
  H[0] = '\0';
  H[0] = 'H';
  H[1] = 'E';
  H[2] = 'A';
  H[3] = 'D';
  H[4] = '\0';
  char M[3];
  M[0] = '\0';
  M[0] = 'M';
  M[1] = 'V';
  M[2] = '\0';
  char T[5];
  T[0] = '\0';
  T[0] = 'T';
  T[1] = 'A';
  T[2] = 'I';
  T[3] = 'L';
  T[4] = '\0';
  int res = 0;
  ARGUMENTO *one = inicio;
  char *upper = one->a;
  while (*upper != '\0')
    {
      __fpurge (stdin);
      *upper = toupper (*upper);
      upper++;
    }

  if (strcmp (one->a, C) == 0)
    res = 1;
  if (strcmp (one->a, E) == 0)
    res = 2;
  if (strcmp (one->a, G) == 0)
    res = 3;
  if (strcmp (one->a, H) == 0)
    res = 4;
  if (strcmp (one->a, M) == 0)
    res = 5;
  if (strcmp (one->a, T) == 0)
    res = 6;
  return (res);
}

int
Menu (int opc, int numargu, ARGUMENTO * inicio)
{
  int exito;
  switch (opc)
    {
    case 1:
      exito = CATfunction (numargu, inicio);
      break;
    case 2:
      EXITfunction ();
      break;
    case 3:
      exito = GREPfunction (numargu, inicio);
      break;
    case 4:
      exito = HEADfunction (numargu, inicio);
      break;
    case 5:
      exito = MVfunction (numargu, inicio);
      break;
    case 6:
      exito = TAILfunction (numargu, inicio);
      break;
    default:
      exito = 0;
      printf ("B!ERROR! \n%s:Orden no encontrada \n", inicio->a);
      break;
    }
  return (exito);
}

int
CATfunction (int numargu, ARGUMENTO * inicio)
{

  int check = 1;
  ARGUMENTO *boat = inicio;
  if (numargu == 1)
    {
      printf
	("\t| B!ERROR DE SINTAXIS!\n\t| ______faltan argumentos________\n");
      printf ("\n\t Recordatorio: CAT archivo1 archivo2 ...\n\n");
      check = 0;
    }
  else
    {
      int f = 0;
      for (; f < numargu - 1; f++)
	{
	  system ("clear");
	  boat = boat->sig;
	  check = CATinterior (boat);
	}
    }
  getchar ();
  system ("clear");
  return (check);

}

int
CATinterior (ARGUMENTO * boat)
{
  int check = 1;
  FILE *archivo;
  system ("clear");
  printf ("\033[31m Archivo: \033[33m%s\033[0m\n\n", boat->a);
  archivo = fopen (boat->a, "rt");
  if (archivo == NULL)
    {
      perror ("ERROR AL ABRIR EL ARCHIVO\n\n");
      printf
	("\n Favor de verificar si el nombre del archivo esta escrito correctamente\n");
      check = 0;
      return (check);
    }
  if (check == 1)
    {
      char caracter;
      while (feof (archivo) == 0)
	{
	  caracter = fgetc (archivo);
	  printf ("%c", caracter);
	}

      fclose (archivo);

      printf ("\033[31m \033[4m FIN DE ARCHIVO\033[0m");
    }
  //getchar();system("clear");
  return (check);
}

void
EXITfunction (void)
{
  exit (1);
}

int
GREPfunction (int numargu, ARGUMENTO * inicio)
{
  int check;
  char *busq;
  ARGUMENTO *boat = inicio;
  if (numargu < 3)
    {
      printf
	("\t| B!ERROR DE SINTAXIS!\n\t| ______faltan argumentos________\n");
      printf ("\n\t Recordatorio: GREP PalabraBuscada NombreArchivo\n\n");
      getchar ();
      check = 0;

    }
  else
    {
      system ("clear");
      busq = (char *) malloc (sizeof (char));
      boat = boat->sig;
      strcpy (busq, boat->a);
      FILE *archivo;
      int nlinea = 1, rbusq, flag = 0;
      char *linea = NULL;
      boat = boat->sig;
      printf ("\033[31m Archivo: \033[33m%s\033[0m\n\n", boat->a);
      archivo = fopen (boat->a, "rt");
      if (archivo == NULL)
	{
	  perror ("ERROR AL ABRIR EL ARCHIVO\n\n");
	  printf
	    ("\n Favor de verificar si el nombre del archivo esta escrito correctamente\n");
	  check = 0;
	  return (check);
	}
      printf ("\033[33mPalabra buscada\033[0m: %s \n", busq);
      nlinea = 0;
      while (feof (archivo) == 0)
	{
	  nlinea++;
	  rbusq = 0;
	  linea = (char *) malloc (sizeof (char) * 241);
	  fgets (linea, 241, archivo);
	  rbusq = Buscar (linea, busq);
	  if (rbusq == 1)
	    {
	      printf ("|%d | %s\n", nlinea, linea);
	      flag++;
	    }
	}
      if (flag == 0)
	printf ("No se han entrado resultado de %s en el archivo\n", busq);

      fclose (archivo);
      free (linea);
    }
  return (check);
}

int
Buscar (char *linea, char *busq)
{
  char *boat = NULL;
  int longlinea = 0, flag = 0, lim;
  int fx;
  boat = linea;
  longlinea = strlen (linea);
  boat[longlinea - 1] = '\0';
  char compara[longlinea];
  lim = longlinea;
  longlinea = 0;
  while ((longlinea < lim) && (flag == 0))
    {
      fx = 0;
      compara[fx] = '\0';
      while ((boat[longlinea] != ' ') && (longlinea < lim)
	     && (boat[longlinea] != '(') && (boat[longlinea] != ')')
	     && (boat[longlinea] != '"') && (boat[longlinea] != ',')
	     && (boat[longlinea] != '=') && (boat[longlinea] != ';')
	     && (boat[longlinea] != '{') && (boat[longlinea] != '}')
	     && (boat[longlinea] != '[') && (boat[longlinea] != ']'))
	{
	  compara[fx] = boat[longlinea];
	  longlinea++;
	  fx++;
	}
      compara[fx] = '\0';
      longlinea++;
      if (strcmp (compara, busq) == 0)
	{
	  flag = 1;
	}
    }
  return (flag);
}

int
HEADfunction (int numargu, ARGUMENTO * inicio)
{
  ARGUMENTO *boat = inicio;
  int check;
  if (numargu == 1)
    {
      printf
	("\t| B!ERROR DE SINTAXIS!\n\t| ______faltan argumentos________\n");
      printf ("\n\t Recordatorio: HEAD NombreArchivo\n\n");
      check = 0;
    }
  else
    {
      boat = boat->sig;
      FILE *archivo;
      printf ("\033[31m Archivo: \033[33m%s\033[0m\n\n", boat->a);
      archivo = fopen (boat->a, "rb");
      int conta = 0;
      char caracter;
      if (archivo == NULL)
	{
	  perror ("ERROR AL ABRIR EL ARCHIVO\n\n");
	  printf
	    ("\n Favor de verificar si el nombre del archivo esta escrito correctamente\n");
	  check = 0;
	  return (check);
	}
      else
	{
	  while (conta != 10)
	    {
	      caracter = fgetc (archivo);
	      if (caracter == '\n')
		conta++;
	      printf ("%c", caracter);
	      if (feof (archivo) != 0)
		{
		  check = 1;
		}
	    }
	  fclose (archivo);
	}
    }
  return (check);
}

int
MVfunction (int numargu, ARGUMENTO * inicio)
{
  int check;
  ARGUMENTO *boat = inicio;
  if (numargu < 3)
    {
      printf
	("\t| B!ERROR DE SINTAXIS!\n\t| ______faltan argumentos________\n");
      printf
	("\n\t Recordatorio: MV NombreArchivoOriginal NombreArchivoNuevo\n\n");
      check = 0;
    }
  else
    {
      system ("clear");
      check = Transfer (inicio, numargu);
      if (check == 0)
	return (check);
      else
	{
	  boat = boat->sig;
	  boat = boat->sig;
	  printf ("CAMBIO REALIZADO CON C	XITO\n\n");
	  getchar ();
	}
    }
  return (check);
}

int
Transfer (ARGUMENTO * inicio, int numargu)
{
  int check;
  ARGUMENTO *boat = inicio;
  FILE *archivo, *archivo2;
  char *linea;
  int nlinea = 0;
  char aux[20];
  aux[0] = '\0';
  boat = boat->sig;
  strcpy (aux, boat->a);
  archivo = fopen (boat->a, "rt");
  printf ("\033[31m Archivo Original: \033[33m%s\033[0m\n\n", boat->a);
  boat = boat->sig;
  if ((archivo == NULL))
    {
      perror ("ERROR AL ABRIR EL ARCHIVO 1 \n\n");
      check = 0;
      printf
	("\n Favor de verificar si el nombre del archivo original esta escrito correctamente\n");
      return (check);
    }
  printf ("\033[31m Archivo Nuevo: \033[33m%s\033[0m\n\n", boat->a);

  archivo2 = fopen (boat->a, "wt");
  if ((archivo2 == NULL))
    {
      perror ("ERROR AL ABRIR EL ARCHIVO2\n\n");
      check = 0;
      getchar ();
      return (check);
    }
  else
    {

      while (feof (archivo) == 0)
	{
	  check = 1;
	  linea = (char *) malloc (sizeof (char) * 241);
	  fgets (linea, 241, archivo);
	  nlinea++;
	  fprintf (archivo2, "%s", linea);
	}
      fclose (archivo2);
      fclose (archivo);
      free (linea);
      remove (aux);
    }
  return (check);
}

int
TAILfunction (int numargu, ARGUMENTO * inicio)
{
  int check;
  ARGUMENTO *boat = inicio;
  if (numargu == 1)
    {
      printf
	("\t| B!ERROR DE SINTAXIS!\n\t| ______faltan argumentos________ \n");
      printf ("\n\t Recordatorio: TAIL NombreArchivo\n\n");
      check = 0;
    }
  else
    {
      FILE *archivo, *aux;
      int nlinea, userlinesrequired = 10, conta;
      char *linea = NULL;
      boat = boat->sig;
      system ("clear");
      printf ("\033[31m Archivo: \033[33m%s\033[0m\n\n", boat->a);
      archivo = fopen (boat->a, "rt");
      aux = fopen (boat->a, "rt");
      if (archivo == NULL)
	{
	  perror ("ERROR AL ABRIR EL ARCHIVO\n\n");
	  printf
	    ("\n Favor de verificar si el nombre del archivo esta escrito correctamente\n");
	  check = 0;
	  return (check);
	}
      conta = 0;
      while (feof (archivo) == 0)
	{
	  check = 1;
	  linea = (char *) malloc (sizeof (char) * 241);
	  fgets (linea, 241, archivo);
	  conta++;
	}
      int conta2 = conta - 1;
      printf ("Numero de linea conta:%d", conta);
      free (linea);
      conta = conta - userlinesrequired;
      printf ("Numero de linea conta:%d", conta);
      nlinea = 0;
      while (feof (aux) == 0)
	{
	  check = 1;
	  linea = (char *) malloc (sizeof (char) * 241);
	  fgets (linea, 241, aux);
	  if ((nlinea >= conta - 1) && (nlinea < conta2))
	    {
	      printf ("\n| %d | %s", nlinea, linea);
	    }
	  nlinea++;
	}
      fclose (archivo);
      fclose (aux);
      free (linea);
      printf ("\033[31m \033[4m FIN DE ARCHIVO\033[0m");
      getchar ();
    }
  return (check);
}


