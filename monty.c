#include "monty.h"
tool tools = {NULL, NULL, NULL, NULL};
/**
 *  * main - Program that interprets bytecode (.m) and execute opcode
 *   * @argn: number of arguments.
 *    * @argv: Arguments passed to the program.
 *     * Return: 0 on success or exit with code 1.
 *      */
int main(int argn, char *argv[])
{
	int line_num = 1;
	int read = 0;
	size_t linea = 0;
	stack_t *head = NULL;

	if (argumentos != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	tools.archivoM = fopen(argv[1], "r");
		if (!archivo)
		{
			fprintf(stderr, "Error: Can't open file %s\n", archivo);
			exit(EXIT_FAILURE);
		}

	while ((read = getline(&tools.buffer, &linea, tools.archivoM)) != EOF)
	{
		toquenizar(tools.buffer);
		if (tools.comando != NULL && tools.comando[0] != '$')
			instruccion(line_num, tools.comando, &head);
		line_num++;
	}
	fclose(tools.archivoM);
	return (0);
}
