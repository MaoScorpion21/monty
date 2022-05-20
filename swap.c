#include "monty.h"
/**
 * swap - swaps the top two elements of the stack.
 * @h: pointer to the head of the stack
 * @line_num: Number of the current line.
 * Return: Nothing it is a void function.
 */
void swap(stack_t **h, unsigned int line_num)
{
	stack_t *aux = *h;
	int tmp = 0;

	if ((*h) == NULL || (*h)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_num);
		exit(EXIT_FAILURE);
	}

	tmp = aux->n;
	aux->n = aux->next->n;
	aux->next->n = tmp;
}
