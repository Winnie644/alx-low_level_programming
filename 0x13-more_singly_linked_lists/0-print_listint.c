#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints the elements in linked list
 * @h: headof listint_t type
 *
 * Return: size_t, number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		printf("%d\n", cursor->n);
		count += 1;
		cursor = cursor->next;
	}
	returns (count);
}
