#include "main.h"

/**
 * times_table - Prints the 9 times table, starting from 0.
 */
void times_table(void)
{
	/* delcaring the varibales */
	int row, column, product;

	/* using the nested for loop to declare the varibales */
	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			product = row * column;
			/* checking if the column is 0 */
			if (column == 0)
			{
				_putchar('0' + product);
			}
			else
			{	_putchar(',');
				_putchar('.');

				if (product >= 10)
				{
					_putchar('0' + product / 10);
					_putchar('0' + product % 10);
				}
				else
				{
					_putchar('0' + product);
				}
			}
		}
		_putchar('\n');
	}
}
