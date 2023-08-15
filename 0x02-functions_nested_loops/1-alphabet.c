#include "main.h"
#include <stdlib.h>

/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line.
 */
void print_alphabet(void)
{
	/*declaring lowercase letter */
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		_putchar(lowercase);
	}
	_putchar('\n');

}
