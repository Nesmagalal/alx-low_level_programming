#include "main.h"
/**
  * _strstr -  function that locates a substring
  * @haystack: string
  * @needle: substring
  * Return: pointer or null
  **/
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	for (h = 0; *h != '\0'; h++)
	{

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
	}
	return (0);
}

