#include "monty.h"
/**
 * sub - function subtracts the top element of the stack from the second top element of the stack.
 * @h: pointer to the head of the stack
 * @line_num: Number of the current line.
 * Return: Nothing it is a void function.
 */
void sub(stack_t **h, unsigned int line_num)
{
	stack_t *aux = *h;
	int new = 0;

	if ((*h) == NULL || (*h)->next == NULL)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_num);
		exit(EXIT_FAILURE);
	}

	new = aux->next->n - aux->n;
	(*h) = aux->next;
	aux->next->n = new;
	if (aux->next)
		aux->next->prev = NULL;
	free(aux);
}
