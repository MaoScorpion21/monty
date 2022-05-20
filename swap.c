#include "monty.h"
/**
 * swap - swaps the top two elements of the stack.
 * @h: pointer to the head of the stack
 * @line_num: Number of the current line.
 * Return: Nothing it is a void function.
 */
void swap(stack_t **h, unsigned int line_num)
{
	stack_t *tmp;

	if ((*h)->next == NULL || (*h)->next->next == NULL)
	{
		fprintf(stderr, "L%d:  can't swap, stack too short\n", line_num);
		_free(*h);
		exit(EXIT_FAILURE);
	}

	tmp = (*h)->next->next;
	(*h)->next->next = tmp->next;
	(*h)->next->prev = tmp;
	if (tmp->next)
		tmp->next->prev = (*h)->next;
	tmp->next = (*h)->next;
	tmp->prev = *h;
	(*h)->next = tmp;
}
