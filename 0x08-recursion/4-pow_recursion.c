#include "main.h"
#include <stdio.h>
#include <string.h>
#include <math.h>

/**
 * _pow_recursion - returns value of x to the power of y
 * @x: integer
 * @y: power of
 * Return: -1 || 1 || z
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (x == 0)
	{
		return (0);
	}
	if (x == 1 || y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
