#include "main.h"

/**
 *  print_line - printing lines
 * @n: The number of times on lie to be printed.
 *
 * Return: On success, the character written is returned.
 * On error, -1 is returned.
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for  (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
