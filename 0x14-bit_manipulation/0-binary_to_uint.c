#include "main.h"
#include <stdio.h>

/**
 * binary_to_int - convert a binary to an unsigneed int.
 * @b: binary string representation
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int results = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
	if (*b == '0' || *b == '1')
	{
		results = (results << 1) + (*b - '0');
		b++;
	}
	else
	{
		return (0);
	}
	}
	return (results);
}
