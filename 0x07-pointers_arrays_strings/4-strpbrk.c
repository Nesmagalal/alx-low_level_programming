#include "main.h"
/**
  *_strpbrk - function that searches a string for any of a set of bytes
  * @s: string
  * @accept: any of the bytes in the string
  * Return: pointer to the byte accept or null
  **/
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *q;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (accept[j] == s[i])
			{
				q = &s[i];
				return (q);

			}
	}
}
