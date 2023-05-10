#include "main.h"
#include <stdio.h>
/**
  * is_prime_number - function that returns 1 if n is prime otherwise return 0
  * @n: integer
  * @x: other integer
  * Return: always 0 if prime  1 if else
  */
int check_prime(int n, int x);
int is_prime_number(int n)
{
return (check_prime(n, 2));
}

/**
  * check_prime - check all number < n
  * @n: int
  * @x: int
  * Return: int
  */
int check_prime(int n, int x)
{
	if (x >= n && n > 1)
		return (1);
	else if (n % x == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, x + 1));
}
