#include "lists.h"

/**
 * sum_listint - Function that returns the sum of all the data (n)
 * of a listint_t linked list
 *
 * @head: Pointer to the first element of a list
 * Return: Sum of all the data (n), otherwise 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
