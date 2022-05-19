#include "monty.h"
/**
 * add_dnodeint - add new node to the list
 * @head: head of the list
 * @n: valor of nodo
 * Return: nodo
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
  dlistint_t *new = NULL;

  new = malloc(sizeof(dlistint_t));
  if (new == NULL)
    return (NULL);

  new->n = n;
  new->prev = NULL;
  new->next = NULL;

  if (*head != NULL)
    {
      new->next = *head;
      (*head)->prev = new;
    }
  *head = new;
  return (new);
}

#include "monty.h"
/**
 * add_dnodeint_end - add nodo the end
 * @head: head of the dobly linked lists
 * @n: new value of nodo
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *aux = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (aux->next != NULL)
		aux = aux->next;

	new->prev = aux;
	aux->next = new;

	return (new);
}
