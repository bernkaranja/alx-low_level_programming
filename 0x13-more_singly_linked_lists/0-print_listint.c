#include "lists.h"

/**
 * print_listint - Function that prints all the elements of a listint_t list
 * @h: Pointer to a first list element
 * Return: Integer umber of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count;

	for (count = 0; h; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
