#include "lists.h"

/**
 * free_listint_safe - Function that frees a listint_t list
 * @h: Pointer to a pointer to list first element
 * Return: Size of the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *ptr = *h;
	size_t len = 0;

	if (!h)
		return (len);
	while (ptr)
	{
		if (ptr <= ptr->next)
		{
			free(ptr);
			len++;
			break;
		}

		*h = ptr->next;
		free(ptr);
		ptr = *h;
		len++;
	}
	*h = NULL;
	return (len);
}
