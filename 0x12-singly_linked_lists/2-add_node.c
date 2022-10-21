#include "lists.h"
#include <string.h>

/**
 * add_node - A function that adds a node to the head of linked list
 * @head: pointer to a list_t pointer that points to the head struct
 * @str: pointer to string that adds as node
 * Return: pointer to new head of list, NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int length = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[length])
		length++;

<<<<<<< HEAD
        for (len = 0; str[len];)
                len++;

        new->str = dup;
        new->len = len;
        new->next = *head;

        *head = new;

        return (new);
=======
	temp->len = length;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
>>>>>>> 5ff0908a9eb48193d159659c2e4926bfd4b5eb6b
}
