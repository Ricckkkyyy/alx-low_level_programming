#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * This function prints all base 10 numbers.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	/* decalring digit */
	int digit;

	/* Using the for loop */
	for (digit = 0; digit <= 9; digit++)
	{
		printf("%d", digit);
	}
	printf("\n");

	return (0);
}
