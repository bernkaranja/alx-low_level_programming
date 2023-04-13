#include <math.h>
#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list of integers
 *             using the Jump search algorithm.
 *
 * @list: Pointer to the head of the list to search in.
 * @size: Number of nodes in list.
 * @value: Value to search for.
 *
 * Return: Pointer to the first node where value is located.
 *         NULL if value is not present in head or if head is NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t jump = sqrt(size), prev = 0;
    listint_t *curr = list;

    if (!list)
        return (NULL);

    while (curr->n < value && curr->next)
    {
        prev = curr->index;
        for (size_t i = 0; curr->next && i < jump; i++)
            curr = curr->next;
        printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev, curr->index);
    for (size_t i = prev; i <= curr->index && curr->n <= value; i++, curr = curr->next)
    {
        printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);
        if (curr->n == value)
            return (curr);
    }

    return (NULL);
}
