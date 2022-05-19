#include "monty.h"

/**
 * toquenizar - function that token.
 * @buffer: pointer to the string of the buffer
 * Return: Nothing it is a void function.
 */

void toquenizar(char *buffer)
{
	tools.comando = strtok(buffer, "\t\n\r ");
	tools.numero = strtok(NULL, "\t\n\r ");
}
