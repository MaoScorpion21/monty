#include "monty.h"
/**
 * main - Program that interprets bytecode (.m) and execute opcode
 * @argc: number of arguments.
 * @argv: Arguments passed to the program.
 * Return: 0 on success or exit with code 1.
 */
int main(int argn, char *argv[])
{
  FILE *archivoM = NULL;
  int line_num = 1;
  int read = 0;
  size_t linea = 0;
  char *buffer = NULL, *archivo = NULL, *opcion_codigo = NULL, *numero = NULL;

  if (argn != 2)
    printf ("USAGE: monty file");

  archivo = argv[1];
  if (access(archivo, R_OK) == EOF)
    {
      fprintf(stderr, "Error: Can't open file %s\n", archivo);
      exit(EXIT_FAILURE);
    }
  archivoM = fopen(archivo, "r");
  if (!archivoM)
     {
      fprintf(stderr, "Error: Can't open file %s\n", archivo);
      exit(EXIT_FAILURE);
    }
  while ((read = getline(&buffer, &linea, archivoM)) != EOF)
    {
      opcion_codigo = strtok(buffer, "\t\n ");
      if (opcion_codigo)
	{

	  if (opcion_codigo[0] == '$')
	    {
	      ++line_num;
	      continue;
	    }
	  numero = strtok(NULL, "\t\n ");
	  printf ("cod = %s, parametro %d , linea= %d \n" , opcion_codigo, atoi(numero), line_num);
	}

      line_num++;
    }
  free(buffer);
  return (0);
}
