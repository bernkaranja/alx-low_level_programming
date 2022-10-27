#include "lists.h"

/**
 * listint_len - Function that returns the number of elements in
 * a linked listint_t list
 * @h: Pointer to frist list element
 * Return: INteger number of elements
 */

size_t listint_len(const listint_t *h)
{
	int count;

	for (count = 0; h; count++)
		h = h->next;
	return (count);
}
