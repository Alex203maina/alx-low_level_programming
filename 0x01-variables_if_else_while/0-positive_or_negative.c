#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function prompts the user to enter a number and
 * prints whether the number is positive, zero, or negative.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("enter a number:");
	scanf("%d",&n);

	printf("%d is " , n);
	if (n>0){
		printf("positive\n");
	}else if(n==0){
		printf("zero\n");
	}else{
		printf("negative\n");
	}
	 printf("\n");
	return (0);
}
