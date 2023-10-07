#include <stdio.h>
/**
* main - Prints all single digit numbers of base 10
* Return: Always 0 (success)
*/

int main(void)
{
	int z;

	for (z = '0'; z <= '9'; z++)
	{
	putchar(z);
	if (z != '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
