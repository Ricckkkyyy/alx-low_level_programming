#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point of the program.
 *
 * This function prints the lowercase alphabet excluding 'q' and 'e',
 * followed by a new line.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		if (lowercase != 'e' && lowercase != 'q')
		{
			putchar(lowercase);
		}
	}
	putchar('\n');

	return (0);
}
