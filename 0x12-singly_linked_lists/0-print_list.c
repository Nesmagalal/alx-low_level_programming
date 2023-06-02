#include "lists.h"
/**
  * _strlen - return the length
  * @w: string
  * Return: the number of the length
  */
int _strlen(char *w)
{
	int e = 0;

	if (!w)
		return (0);
	while (*w++)
		e++;
	return (e);
}
/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 * @str: length
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t f = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		f++;
	}
	return (f);
}
