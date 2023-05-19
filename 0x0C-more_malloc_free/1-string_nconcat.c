#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * *string_nconcat -  concatenates two strings
  * @s1: string
  * @s2: string
  * @n: int
  * Return: pointer or null
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int f, k, len1, len2;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;

	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	ptr = malloc(len1 + n + 1);
	if (ptr == NULL)
	{
		return ('\0');
	}
	for (f = 0; s1[f] != '\0'; f++)
		ptr[f] = s1[f];
	for (k = 0; k < n; k++)
	{
		ptr[f] = s2[k];
		f++;
	}

	ptr[f] = '\0';
	return (ptr);
}
