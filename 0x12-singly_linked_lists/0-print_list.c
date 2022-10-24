#include "lists.h"

 /**
  * print_list - Function that prints all the elements of a list_t list
  * @h: A singly linked list
  * Return: Integer number of nodes
  **/

size_t print_list(const list_t *h)
{
	int num;
	
	for (num = 0; h != NULL; num++)
	{
		if (h->str == NULL)
		{	
			printf("[0] (nil)\n");
			h = h->next;
			num++;
		}
		printf("[%d] %s\n", h->len, h->str)						h = h->next;
	}
	return (num);
}
