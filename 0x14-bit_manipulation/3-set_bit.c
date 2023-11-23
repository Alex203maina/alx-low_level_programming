#include "main.h"
#include <stdio.h>

/**
 * set_bit - set the value of bit at a given valuje.
 * @n: pointer to the number in which to set the bit.
 * @index: the index of the bit to be set
 *
 * Return: 1 for working and -1 if an error.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n = *n | (1UL << index);
	return (1);
}
