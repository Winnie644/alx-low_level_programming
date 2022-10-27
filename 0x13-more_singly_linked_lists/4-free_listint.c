#include "lists.h"
/**
 * free_listint - frees a linked list
 * @head: head of list
 *
 * Return: always void
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
