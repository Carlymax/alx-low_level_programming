#include "lists.h"
/**
 *free_list - Entry point
 *@head: input head is the first argument
 * Return: Always 0
 */
void free_list(list_t *head)
{
	list_t *p;

	while (head)
	{
		p = (*head).next;
		free((*head).str);
		free(head);
		head = p;
	}
}
