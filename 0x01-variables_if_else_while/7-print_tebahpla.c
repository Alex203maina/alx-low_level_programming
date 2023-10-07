#include <stdio.h>

/**
* main - Prints lowercase alphabets from back
* Return: Always 0 (success)
*/
	int main(void)
{
	char letter;

       	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
		putchar('\n');
		return (0);
}

