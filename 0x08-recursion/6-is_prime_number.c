#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_prime_number - returns 1 if integer is prime number
 * @n: integer
 * Return: 1 for prime number || 0 for non prime
 */
int is_prime_number(int n)
{
	int divider;

	if (n == divider)
	{
		return (1);
	}
	if (n % divider == 0)
	{
		return (0);
	}
	return (is_prime_number(n, divider + 1));
}
