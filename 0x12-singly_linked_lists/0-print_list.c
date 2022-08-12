#include "lists.h"
/**
 *print_list - Entry point
 *@h: input h is the first argument
 * Return: Always 0
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if ((*h).str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", (*h).len, (*h).str);
		nodes = nodes + 1;
		h = (*h).next;
	}
	return (nodes);
}
