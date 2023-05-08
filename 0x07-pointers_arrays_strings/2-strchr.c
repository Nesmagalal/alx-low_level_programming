#include "main.h"
/**
  *_strchr -  find the first occurrence of the character c in the string s
  * @s: pointer
  * @c: const
  * Return: s or null if the character is not found
  **/
char *_strchr(char *s, char c)
{
	int t;

	for (t = 0; s[t] >= '\0' ; t++)
	{
		if (s[t] == c)
		{
			return (s + t);
		}
	}

}
