#include "main.h"
#include <stdio.h>
#include<math.h>
/**
  * _sqrt_recursion - function that returns the natural square root of a number
  * @n: integer
  * Return: function should return -1
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
  * actual_sqrt_recursion - recurses to find the natural
  * square root of a number
  * @n:number to calculate the square root of
  * @y: iterator
  * Return: the result
  */
int actual_sqrt_recursion(int n, int y)
{
	if (y * y > n)
		return (-1);
	if (y * y == n)
		return (y);
	return (actual_sqrt_recursion(n, y + 1));
}
