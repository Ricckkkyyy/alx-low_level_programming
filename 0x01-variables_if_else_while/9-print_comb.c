#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * This function prints all possible combinations of single-digit numbers,
 * separated by ", ", in ascending order.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	/* decalring number */
	int number;

	/* using the for loop */
	for (number = 0; number <= 9; number++)
	{
		putchar('0' + number);
	if (number < 9)
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');

	return (0);
}
