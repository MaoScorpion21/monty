#include "monty.h"

/**
 * abrir_archi - Opens a file to interpret the commands within
 * @archivo: The file to be opened
 * @argumentos: number args
 * Return: never
 */
void abrir_archi(int argumentos, char *archivo)
{
	if (argumentos != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

