#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number whose natural square root is to be returned
 * Return: -1 if n has no square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	else
		return (helper(n, 1));
}


