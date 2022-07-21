#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen_recursion - returns length of a string
 * @s: string
 * Return: len
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	while (*s > 0)
	{
		length++;
		s++;
	}
	return (length);
}
