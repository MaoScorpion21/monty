#include "monty.h"
/**
 * pop - removes the top element of the stack.
 * @h: pointer to the head of the stack
 * @line_num: Number of the current line.
 * Return: Nothing it is a void function.
 */
void pop(stack_t **h, unsigned int line_num)
{
	stack_t *sig = *h;

	if (h == NULL || *h == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_num);
		exit(EXIT_FAILURE);
	}

	(*h) = sig->next;
	if (sig->next)
		sig->next->prev = NULL;
	free(sig);
}
