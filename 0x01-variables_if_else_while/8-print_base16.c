#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * This function prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char hexa_digit;

	for (hexa_digit = '0'; hexa_digit <= '9'; hexa_digit++)
	{
		putchar(hexa_digit);
	}
	for (hexa_digit = 'a'; hexa_digit <= 'f'; hexa_digit++)
	{
		putchar(hexa_digit);
	}
	putchar('\n');

	return (0);
}
