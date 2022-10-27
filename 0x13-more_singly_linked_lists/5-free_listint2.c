#include "lists.h"

/**
 * free_listint2 - Function that frees a listint_t list
 * @head: Pointer to pointer to first list element
 * Return: Void
 */

void free_listint2(listint_t **head)
{
	listint_t *list_ptr;

	if (head)
	{
		while (*head)
		{
			list_ptr = *head;
			*head = list_ptr->next;
			free(list_ptr);
		}
	}
}
