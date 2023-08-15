#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	/* using the if else statetement to check for lowercase */
	if (c >= 'a' && c <= 'z')
	{
		return (1); /* return 1 if lowercae */
	}
	else
	{
		return (0);
	}
}
