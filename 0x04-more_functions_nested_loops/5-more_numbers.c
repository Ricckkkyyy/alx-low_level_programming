#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Prints 0 to 14 10 times.
 *
 * Return: On success, the character written is returned.
 * On error, -1 is returned.
 */
void more_numbers(void)
{
	char num, ten;

	for (ten = 0; ten <= 9; ten++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar('0' + num / 10);
			}
			_putchar('0' + num % 10);
		}
		_putchar('\n');
	}
}
