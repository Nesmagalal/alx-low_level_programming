#include "main.h"
#include <stdio.h>
/**
  * _strlen_recursion -  function that returns the length of a string
  * @s: string
  * Return: always 0
  */
int _strlen_recursion(char *s)
{
	int i;

	if (*s > '\0')
	{
		i += _strlen_recursion(s + 1) + 1;
	}
	return (i);
}
