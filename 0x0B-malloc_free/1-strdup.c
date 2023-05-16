#include "main.h"
#include <stdlib.h>
/**
  * *_strdup -  returns a pointer to a newly allocated space in memory,
  * which contains a copy of the string given as a parameter.
  * @str: string
  * Return: null
  */
char *_strdup(char *str)
{
	int f = 0, size = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
	;
	ptr = malloc(size * sizeof(*str) + 1);

	if (ptr == 0)
	{
		return ('\0');
	}
	else
	{
		for (; f < size; f++)
			ptr[f] = str[f];
	}
	return (ptr);
}
