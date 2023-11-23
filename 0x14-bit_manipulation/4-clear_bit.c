#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets the value of a bit to 0 ata a given index.
 * @n: pointer to the number in which to cleart the bit
 * @index: the index of the bit to clear
 *
 * Return: 1 if it works, -1 if an error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = (~(1UL << index) & *n);
	return (1);
}
