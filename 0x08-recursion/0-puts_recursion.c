#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *  _puts_recursion - prints string followed by a new line
 *  @s: string to print
 */
void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
	_putchar('\n');
}


