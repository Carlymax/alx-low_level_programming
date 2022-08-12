#include "lists.h"
/**
 *add_node - Entry point
 *@head : input head is the first argument
 *@str: input str is the second argument
 * Return: Always 0
 */
list_t *add_node(list_t **head, const char *str)
{
	char *d;

	int len;

	list_t *n;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);
	d = strdup(str);
	if (d == NULL)
	{
		free(n);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	(*n).str = d;
	(*n).len = len;
	(*n).next = *head;
	*head = n;
	return (n);
}
