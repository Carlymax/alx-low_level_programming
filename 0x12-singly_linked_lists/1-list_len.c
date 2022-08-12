#include "lists.h"
/**
 *list_len - Entry point
 *@h: input h is the first argument
 * Return: Always 0
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n = n + 1;
		h = (*h).next;
	}
	return (n);
}
