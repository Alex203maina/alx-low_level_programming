#include <stdio.h>

/**
* main - Prints all single digit numbers of base 10
* Return: Always 0 (success)
*/

int main(void)
{
	char hexDigit;
	
	for (hexDigit = '0'; hexDigit <= '9'; hexDigit++)
	{
		putchar(hexDigit);
	}
	for (hexDigit = 'a'; hexDigit <= 'f'; hexDigit++)
	{
		putchar(hexDigit);
	}
	putchar('\n');
	return (0);
}

