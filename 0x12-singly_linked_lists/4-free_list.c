#include "lists.h"

/**
 * free_list - A function that frees all elements in a linked list
 * @head: pointer to head element of list
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
<<<<<<< HEAD
=======
	free(head);
>>>>>>> 5ff0908a9eb48193d159659c2e4926bfd4b5eb6b
}
