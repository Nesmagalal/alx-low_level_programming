#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t * head_new;
	unsigned int f = 0;

	while (str[f])
		f++;

	head_new = malloc(sizeof(list_t));
	if (!head_new)
		return (NULL);

	head_new->str = strdup(str);
	head_new->f = f;
	head_new->next = (*head);
	(*head) = head_new;

	return (*head);
}

