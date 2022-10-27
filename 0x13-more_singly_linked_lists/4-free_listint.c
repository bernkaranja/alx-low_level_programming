#include "lists.h"

/**
 * free_listint - Function that frees a listint_t list
 * @head: Pointer to first list element
 * Return: Void
 */

void free_listint(listint_t *head)
{
	listint_t *list_ptr;

	while (head)
	{
		list_ptr = head;
		head = head->next;
		free(list_ptr);
	}
}
