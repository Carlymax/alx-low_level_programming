#include "lists.h"
/**
 *add_node_end - Entry point
 *@head: input head is the first argument
 *@str: input str is the second argument
 * Return: Always 0
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *d;

	int len;

	list_t *n, *l;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);
	d = strdup(str);
	if (str == NULL)
	{
		free(n);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	(*n).str = d;
	(*n).len = len;
	(*n).next = NULL;
	if (*head == NULL)
		*head = n;
	else
	{
		l = *head;
		while ((*l).next != NULL)
			l = (*l).next;
		(*l).next = n;
	}
	return (*head);
}
