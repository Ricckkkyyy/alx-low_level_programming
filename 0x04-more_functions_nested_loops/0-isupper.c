#include "main.h"
#include <stdlib.h>
#include <time.h>

/**
 * _isupper - Checks if a character is uppercase.
 * @c: The character to be checked.
 *
 * Return: 1 if c is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	/* using th if statement to give condition */
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
