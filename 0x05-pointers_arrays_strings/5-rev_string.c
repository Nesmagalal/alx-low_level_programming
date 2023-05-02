#include "main.h"
/**
  * rev_string - reverses a string
  * @s: input string
  * Return: reverses in string
  */
void rev_string(char *s)
{
	char temp;
	int l, i;

	for (l = 0; s[l] != '\0'; ++l)
	for (i = 0; i < l / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = temp;
	}
}
