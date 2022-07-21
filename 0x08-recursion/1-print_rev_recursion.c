#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _print_rev_recursion - prints string in reverse
 * @s: string to print in reverse
 */
void _print_rev_recursion(char *s)
{
	int length = 0;
	int i;

	while (*s != '\0')
	{
		length++;
		++s;
	}
	s--;
	for (i = length; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
}
