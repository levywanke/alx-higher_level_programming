#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - outputs all the elements
 * @h: directs to the list
 * Return: counted nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current;
	unsigned int n;

	current = h;
	n = 0;
	while (current != NULL)
	{
		printf("%i\n", current->n);
		current = current->next;
		n++;
	}
	return (n);
}

/**
 * add_nodeint - addition of a new node
 * @head: directs to the pointer start
 * @n: merical
 * Return: address of new inclusion
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}

/**
 * free_listint - release list
 * @head: direction to list released
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
