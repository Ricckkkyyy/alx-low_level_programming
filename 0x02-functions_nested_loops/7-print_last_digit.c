#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number to extract the last digit from.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
	/* decalring and innitializing last digit */
	int last_digit = n % 10;

	/* using the if else statement to check for -*/
	if (n < 0)
	{
		last_digit = -last_digit; /* obtaining abs number */
	}
	/* printing last digit */
	_putchar('0' + last_digit);
	return (last_digit);
}
