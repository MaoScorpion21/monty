#include "monty.h"
/**
 * pall - function that prints all the values on the stack.
 * @h: pointer to the head of the stack
 * @line_num: Number of the current line.
 * Return: Nothing it is a void function.
 */
void pall(stack_t **h, unsigned int line_num __attribute__((unused)))
{
	stack_t *stack = *h;

	while (stack != NULL)
	{
		printf("%d\n", stack->n);
		stack = stack->next;
	}
}
