#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memcpy - copies memory area
 * @dest: memory origin
 * @src: memory destination
 * @n:size
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int index;


		for  (index = 0; index < size; index++)
		{
			dest[index] = src[index];
		}
	}
	return (dest);
}
