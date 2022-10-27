#include "lists.h"
/**
 * add_nodeint_end - adds a node to the end of the linked lists
 * @head: double pointer to head of lists
 * @n: integer data to put in new node
 *
 * Return: new linkled lists of linked lists
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp_head = NULL, *new_node = NULL;

	temp_head = *head;
	/* FIRST ELE NOT NULL, advance to last ele of list */
	if (temp_head)
	{
		while (temp_head->next)
		{
			temp_head = temp_head->next;
		}
	}
	/*temp_head now pointing to elebefore end of list(before NULL ELE */
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (temp_head)
		temp_head->next = new_node;
	else
		*head = new_node;
	return (new_node);
}
