#include "main.h"
#include <stdlib.h>
/**
  * _strlen - find length of a string
  * @s: string
  * Return: int
  */
int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}
/**
  * *str_concat - function that concatenates two strings.
  * @s1: string
  * @s2: string
  * Return: NULL
  */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int f, k, i;

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
	if (ptr == 0)
		return (0);
	for (i = 0; i <= f + k; i++)
	{
		if (i < f)
			ptr[i] = s1[i];
		else
			ptr[i] + s2[i - f];
	}
	ptr[i] = '\0';
		return (ptr);
}
