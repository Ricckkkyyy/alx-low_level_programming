#include "main.h"
#include <stdlib.h>
/**
 * print_alphabet_x10 - prints lowercase 10 times
 */

void print_alphabet_x10(void)
{
	/* declaring repeat and lowercase letter */
	int repeat;
	char lowercase;

	/*using the for loop to iterate 10 times */
	for (repeat = 0; repeat < 10; repeat++)
	{
		/* using inner for loop for lowercase letter */
		for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
		{
			_putchar(lowercase);
		}
		_putchar('\n');
	}

}
