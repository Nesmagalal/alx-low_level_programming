#include "main.h"
#include <stdio.h>
/**
  * _pow_recursion - function that returns the value of the power x, y
  * @x: base
  * @y: power
  * Return: result of power
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
