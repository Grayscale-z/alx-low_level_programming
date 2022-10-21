#include "lists.h"

/**
 * list_len - A function that gets the number of nodes of linked list
 * @h: head of linked list
 * Return: number of nodes as size_t
 */
size_t list_len(const list_t *h)
{
	unsigned int nodes = 0;

<<<<<<< HEAD
	tmp = h;
	for (i = 0; tmp; i++)
		tmp = tmp->next;
	return (i);
=======
	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
>>>>>>> 5ff0908a9eb48193d159659c2e4926bfd4b5eb6b
}
