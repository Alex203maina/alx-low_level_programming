#include "main.h"
#include <stdio.h>

/**
 * flip_bits - counts the number of bits needed to flip to get from n to m.
 * @n: the first member
 * @m: the second number
 *
 * Return: the number of bits neede to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

		while (xor_result > 0)
		{
			count += xor_result & 1;
			xor_result >>= 1;
		}
	return (count);
}
