#include "lists.h"

/**
 * free_list - Function that frees a list_t list
 * @head: Pointer to first list element
 * Return: Void
 **/

void free_list(list_t *head)
{

	list_t *val;

	while (head)
	{

		val = head;
		free(val->str);
		head = head->next;
		free(val);
	}
}
