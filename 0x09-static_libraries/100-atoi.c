#include "main.h"
/**
  * _atoi - convert a string to an integer.
  * @s: string
  * Return: convert a string to an integer
  */
int _atoi(char *s)
{
	int n = 0;
	int i = 0;
	int d = 0;
	int f = 0;
	int l = 0;
	int b = 0;

	while (s[l] != '\0')
		l++;
	while (i < l && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			b = s[i] - '0';
			if (d % 2)
				b = -b;
			n = n * 10 + b;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);

	return (n);
}
