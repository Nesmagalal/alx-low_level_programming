#include "main.h"
#include <stdlib.h>
/**
  * *create_array - create array of chars, and initializes
  * it with a specific char
  * @size: size of array
  * @c: char
  * Return: pointer or null
  */
char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(size);

	if (size == 0 || ptr == 0)
		return (0);

	while (size--)
		ptr[size] = c;
	return (ptr);
}
