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
  size_t linea = 0;
  int read = 0;
  char *buffer = NULL, *archivo = NULL;

  archivo = argv[1];
  archivoM = fopen(archivo, "r");
  if (!archivoM)
    {
      fprintf(stderr, "Error: Can't open file %s\n", archiv);
      exit(EXIT_FAILURE);
    }
  read = getline(&buffer, &linea, archivoM);
  while (read != EOF)


}
