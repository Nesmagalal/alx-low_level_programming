#include "main.h"
/**
  *_strpbrk - function that searches a string for any of a set of bytes
  * @s: string
  * @accept: any of the bytes in the string
  * Return: pointer to the byte accept or null
  **/
char *_strpbrk(char *s, char *accept)
{
	int y;

	while (*s)
	{
		for (y = 0; accept[y]; y++)
		{
		if (*s == accept[y])
		return (s);
		}
	s++;
	}
	return ('\0');
}

