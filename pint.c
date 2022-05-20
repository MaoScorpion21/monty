#include "monty.h"
/**
 * pint - prints the value at the top of the stack
 * @h: pointer to the head of the stack
 * @line_num: Number of the current line.
 * Return: Nothing it is a void function.
 */
void pint(stack_t **h, unsigned int line_num)
{
	if (h == NULL || *h == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_num);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*h)->n);

}