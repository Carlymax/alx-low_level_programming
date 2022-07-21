#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * set_string - Write a function that sets the value of a pointer to a char
 * @s: pointer variable
 * @to: character
 */
void set_string(char **s, char *to)
{
	*s = to;
}

