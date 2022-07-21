#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character being located
 * Return: address or null
 */
char *_strchr(char *s, char c)
{
	int index = 0;

	while (s[index] != '\0' && s[index] != c)
		index++;
	if (s[index] == c)
		return (&s[index]);
	else
		return (NULL);

}
