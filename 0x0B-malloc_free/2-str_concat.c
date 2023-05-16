#include "main.h"
#include <stdlib.h>
/**
  * *str_concat - function that concatenates two strings.
  * @s1: string
  * @s2: string
  * Return: NULL
  */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int f, k;

	if (s1 == NULL)
		s1 = NULL;
	if (s2 == NULL)
		s2 = NULL;

	f = k = 0;

	while (s1[f] != '\0')
		f++;
	while (s2[k] != '\0')
		k++;
	ptr = malloc(sizeof(char) + 1 * (f + k));

	if (ptr == NULL)
		return (NULL);
	f = k = 0;
	while (s1[f] != '\0')
	{
		ptr[f] = s1[f];
		f++;
	}

	while (s2[k] != '\0')
	{
		ptr[f] = s2[k];
		f++, k++;
	}
	ptr[f] = '\0';
	return (ptr);
}
