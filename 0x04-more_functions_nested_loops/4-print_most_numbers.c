#include "main.h"


/**
 * print_most_numbers - Prints numbers apart from 2 and 4.
 *
 * Return: On success, the character written is returned.
 * On error, -1 is returned.
 */
void print_most_numbers(void)
{
	/* declaring the numner */
	char num;

	/* usinf the for loop to give condition */
	for (num = '0'; num <= '9'; num++)
	{
		if (num != '2' && num != '4')
		{
			_putchar(num);
		}
	}
	_putchar('\n');
}
