#include "lists.h"

/**
 * print_listint - prints every element of a linked list
 * @h: is the linked list of type listint_t to print
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
