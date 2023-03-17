#include "lists.h"

/**
 * print_dlistint- Prints all the elements of a dlistint_t list
 * @h: Pointer to the first node
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t l = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		l++;
	}
	return (l);
}
