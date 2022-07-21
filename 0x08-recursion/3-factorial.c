#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * factorial - return factorial of a number
 * @n: integer
 * Return: -1 for error || factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1); /* to indicate error */
	}
	else if (n == 0 || n == 1) /* factorial of 0 and 1 is 1*/
	{
		return (n);
	}
	else
	{
		return ( n * factorial (n - 1));
	}
}
