#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack:string
 * @needle:substring
 * Return: Pointer t beginning of string or null
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *beginning = haystack;
		char *pattern = needle;

		while (*pattern == *haystack && *pattern != '\0'
				&& *haystack != '\0')
		{
			haystack++;
			pattern++;
		}
		if (*pattern == '\0')
			return (beginning);
		haystack = beginning + 1;
	}
	return ('\0');
}
