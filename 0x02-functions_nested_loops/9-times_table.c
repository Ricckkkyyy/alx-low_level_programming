#include "main.h"

/**
 * times_table - Prints the 9 times table, starting from 0.
 */
void times_table(void)
{
	/* declaring the variables */
	int row, column, product;

	/* using nested loop to calculate product */
	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			/* declaring the product */
			product = row * column;
			/* printing product when column is 0 */
			if (column == 0)
			{
				_putchar('0' + product);
			}
			else
			{

				_putchar(',');
				_putchar(' ');

				if (product >= 10)
				{
					_putchar('0' + product / 10);
					_putchar('0' + product % 10);
				}
				else
				{
					/* if product is a single digit */
					_putchar(',');
					_putchar('0' + product);
				}
			}
		}
		_putchar('\n');
	}

}
