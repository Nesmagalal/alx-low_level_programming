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
	list_t *head_new = malloc(sizeof(list_t));
	if (!head || !head_new)
		return (NULL);
	if (str)
	{
		head_new->str = strdup(str);
		if (!head_new->str)
		{
			free(new_head);
			return (NULL);
		}
		head_new->len = _strlen(head_new->str);
	}

	head_new->next = *head;
	*head = head_new;

	return (head_new);
}

