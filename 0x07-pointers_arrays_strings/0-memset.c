#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memset - fills memory with a constant byte
 * @s: String
 * @b: Constant byte
 * @n: Size
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int index;


		for (index = 0; index < size; index++)
		{
			s[index] = b;
		}
	}
	return (s);
}
