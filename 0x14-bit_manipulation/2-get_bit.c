#include "main.h"
#include <stdio.h>

/**
 * get_bit - get the vlue of a bit in a given index
 * @n: the number to extract the bit from
 * @index: the index of the bit to retrieve
 *
 * Return: the value of the index at the specificied index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
