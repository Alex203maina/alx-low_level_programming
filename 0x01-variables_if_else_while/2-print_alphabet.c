#include<stdio.h>
#include<string.h>
/**
* main - Prints lowercase alphabets
* Return: Always 0 (success)
*/

	int main(void)
	{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
	}
