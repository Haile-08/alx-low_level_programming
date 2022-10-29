#include <stdio.h>

void before_main(void) __attribute__((constructor));

/**
 * before_main - before main
 * Description: a function that executes before main
 *
 * Return: none
 */

void before_main(void)
{
	printf("You're beat! and yet, you must al");
	printf("low,\nI bore my house upon my back!\n");
}
