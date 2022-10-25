#include "lists.h"

/**
 * list_len - Function that returns the number of elements in
 * a linked list_t list
 * @h: A singly linked list
 * Return: Number of elements in a list
 */

size_t list_len(const list_t *h)
{
	int num;

	for (num = 0; h != NULL; num++)
		h = h->next;
	return (num);
}
