#include "lists.h"

/**
 * add_nodeint - Function that adds a new node at
 * the beginning of a listint_t list
 * @head: Pointer to the pointer of the first list element
 * @n: Number of elements to be added
 * Return: Address of a new element, otherwise NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (*head);
}
