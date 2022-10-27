#include "lists.h"

/**
 * reverse_listint - Function that reverses a listint_t linked list
 * @head: Pointer to a pointer of the first element in a list
 * Return: Pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_node = NULL, *current_node = NULL;

	while (*head)
	{
		next_node = (*head)->next;
		(*head)->next = current_node;
		current_node = *head;
		*head = next_node;
	}
	*head = current_node;
	return (*head);
}
