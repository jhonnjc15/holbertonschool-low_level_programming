#include <stdio.h>

void before_main(void)__attribute__((constructor));

/**
 * before_main - prints a specific message
 *
 * Return: No return
 */
void before_main(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
