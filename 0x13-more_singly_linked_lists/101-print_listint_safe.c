#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the unique nodes in
 * a looped listint_t linked list.
 * @head: pointer to the head of the listint_t to check.
 *
 * Return: If not looped list - 0.
 * Otherwise - number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *cat, *cow;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	cat = head->next;
	cow = (head->next)->next;

	while (cow)
	{
		if (cat == cow)
		{
			cat = head;
			while (cat != cow)
			{
				nodes++;
				cat = cat->next;
				cow = cow->next;
			}

			cat = cat->next;
			while (cat != cow)
			{
				nodes++;
				cat = cat->next;
			}

			return (nodes);
		}

		cat = cat->next;
		cow = (cow->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - safely Prints a listint_t list
 * @head: head pointer of the listint_t
 *
 * Return: The count of nodes list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
