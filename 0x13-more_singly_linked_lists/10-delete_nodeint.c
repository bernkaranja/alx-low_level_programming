#include "lists.h"

/**
 * delete_nodeint_at_index - Function that deletes the node at
 * index index of a listint_t linked list
 *
 * @head: Pointer to pointer to first list element
 * @index: Index to list
 * Return: 1 for success, -1 for failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *next_node = *head, *temp_node = *head;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		*head = temp_node->next;
		free(temp_node);
		return (1);
	}

	while (temp_node)
	{
		if (count  == index - 1)
		{
			next_node = temp_node->next;
			temp_node->next = next_node->next;
			free(next_node);
			return (1);
		}
		temp_node = temp_node->next, count++;
	}
	return (-1);
}
