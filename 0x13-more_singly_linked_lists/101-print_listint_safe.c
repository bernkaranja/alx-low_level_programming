#include "lists.h"

/**
 * print_listint_safe - Function that prints a listint_t linked list
 * @head: Pointer to first element of a list
 * Return: Number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *temp_node, *next_node = head;

	while (next_node)
	{
		printf("[%p] %d\n", (void *)next_node, next_node->n);
		temp_node = next_node;
		next_node = next_node->next;
		count++;
		if (temp_node <= next_node)
		{
			printf("-> [%p] %d\n", (void *)next_node, next_node->n);
			break;
		}
	}
	return (count);
}
