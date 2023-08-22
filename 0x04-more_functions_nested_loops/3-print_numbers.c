#include "main.h"
#include <stdlib.h>

/**
 * print_numbers - prints 0123456789\n
 *
 * Return: void
 */
void print_numbers(void)
{
	/* decalring and innitializingvariable */
	char num = '0';

	while (num <= '9')
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
