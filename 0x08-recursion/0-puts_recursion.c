#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: Pointer to the string to be printed.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		printf("\n");
		return;
	}
	printf("%c", *s);
	_puts_recursion(s + 1);
}
