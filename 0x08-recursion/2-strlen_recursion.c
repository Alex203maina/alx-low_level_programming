#include"main.h"

/**
 * _strlen_recursion - Returns the length of a string using recursion.
 * @s: Pointer to the string.
 *
 * Return: Length of the string.
 */
int _strlen_recursion(char *s)
{
	int k = 0;

	if (*s)
	{
		k++;
		k += _strlen_recursion(s + 1);
	}
	return (k);
}
