#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 *
 * This function prints the lowercase alphabet in reverse,
 * followed by a new line.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	/* declaring the lowercase letter */
	char lowercase;
	/* using the for loop to check the cases */
	for (lowercase = 'z'; lowercase >= 'a'; lowercase--)
	{
		putchar(lowercase);
	}
	putchar('\n');

	return (0);
}
