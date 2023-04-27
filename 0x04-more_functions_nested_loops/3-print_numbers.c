#include "main.h"
/**
  * print_numbers - print 0 - 9
  * Return: always 0
*/
void print_numbers(void)
{
	int n = 0;

	do {
		_putchar(n + 48);
		n++;
	} while (n >= 0 && n <= 9);
	_putchar('\n');
}
