#include "main.h"
/**
  * _memcpy - function copies n bytes from memory area src to memory area dest
  * @dest: memory area and address,pointer
  * @src: memory area fill from,pointer
  * @n: size of the memory
  * Return: pointer to dest
  **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int q = 0;
	int j = n;

	for (q = 0; q < j; q++)
	{
		dest[q] = src[q];
		n--;
	}
	return (dest);
}
