#include "main.h"
/**
  * _strcat -  function appends the two straing
  * @dest: pointer to destnation input
  * @src: pointer to source input
  * Return: pointer to resulting string des
  */
char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;

	while (dest[c])
			c++;
	for (c2 = 0; scr[c2]; c2++)
		dest[c] = src[c2];
		c++;
	return (dest);
}
