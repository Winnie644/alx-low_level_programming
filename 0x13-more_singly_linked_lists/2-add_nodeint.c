#include "lists.h"
#include <string.h>
/**
 * add_nodeint - adds a node of listint_t to the head of linked lists
 * @head: pointer to a list_t pointer that points to the head struct
 * @n: integer data to put in a new node
 *
 * Return: pointer to a new head list, NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp_head;

	temp_head = *head;
	*head = malloc(sizeof(listint_t));
	if (!*head)
		return (NULL);
	(*head)->n = n;
	(*head)->next = temp_head;
	return (*head);
}
