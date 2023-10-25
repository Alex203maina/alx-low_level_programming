#include"main.h"
#include <string.h>
#include<stdio.h>

/**
 * _puts_rev_recursion - Prints a string in reverse.
 * @s: Pointer to the string to be printed.
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	printf("%c", *s);
}

