#include <stdio.h>
void first_comment(void)__attribute__((constructor));
/**
 *first_comment - Entry point
 * Return: Always 0
 */
void first_comment(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
