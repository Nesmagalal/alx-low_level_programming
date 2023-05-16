#include "main.h"
/**
  * _memset -  function fills the first n bytes by s with the value byte b
  * @n: the size of the memory to print
  * @s: the address of memory to print
  * @b: value constant byte
  * Return: pointer s
  **/
char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	for (j = 0; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
