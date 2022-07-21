#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: source of bytes
 * Return: 0 for success
 */
char *_strpbrk(char *s, char *accept)
{
	int i, t, j;

	i = 0;
	while (s[i] != '\0')
	{
		t = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				t = 1;
		}
		j = 0;
		if (t == 1)
			return (s + i);
		i++;
	}
	return (0);
}
