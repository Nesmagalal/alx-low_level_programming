#include "main.h"
/**
  * rev_string - reverses a string
  * @s: input string
  * Return: reverses in string
  */
void rev_string(char *s)
{
	char temp;
	int l = 0, i = 0;

	while (s[i++])
		l++;

	for (i = l - 1; i >= l / 2; i--)
	{
		temp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = temp;
	}
}
