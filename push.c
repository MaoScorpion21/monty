#include "monty.h"
/**
 * push - function that pushes an element to the stack.
 * @h: pointer to the head of the stack
 * @line_num: Number of the current line.
 * Return: Nothing it is a void function.
 */
void push(stack_t **h, unsigned int line_num)
{

	if (_isdigit(tools.numero) == 1)
	{
		if (*h == NULL || h == NULL)
			add_dnodeint(h, atoi(tools.numero));
		else
			add_dnodeint_end(h, atoi(tools.numero));
	}
	else
	{
		dprintf(STDERR_FILENO, "L%u: usage: push integer\n", line_num);
		exit(EXIT_FAILURE);
	}
}
