#include "main.h"
#include <stdlib.h>

/**
 * _isalpha - Checks if a character is an alphabetic letter.
 * @c: The character to be checked.
 *
 * Return: 1 if c is an alphabetic letter, 0 otherwise.
 */
int _isalpha(int c)
{
	/* using is else statement to check for letters */
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
