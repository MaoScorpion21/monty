#include "monty.h"
tool tools = {NULL, NULL, NULL, NULL};
/**
 * main - Program that interprets bytecode (.m) and execute opcode
 * @argc: number of arguments.
 * @argv: Arguments passed to the program.
 * Return: 0 on success or exit with code 1.
 */
int main(int argn, char *argv[])
{
  int line_num = 1;
  int read = 0;
  size_t linea = 0;
  char *archivo = NULL;
  stack_t *head = NULL;

  archivo = argv[1];
  abrir_archi(argn, archivo);
  while ((read = getline(&tools.buffer, &linea, tools.archivoM)) != EOF)
    {
      toquenizar(tools.buffer);
      if (tools.comando != NULL && tools.comando[0] != '$')
	instruccion(line_num, tools.comando, &head);
      else
	{
	  line_num++;
	  continue;
	}
      line_num++;
    }
  fclose(tools.archivoM);
  return (0);
}
