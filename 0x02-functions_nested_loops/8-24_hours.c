#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer.
 */
void jack_bauer(void)
{
	/* declaring hours and minutes */
	int hour;
	int minute;

	/* using the outer for loop for the hour */
	for (hour = 0; hour < 24; hour++)
	{
	/* using the inner for loop for minutes */
		for (minute = 0; minute < 60; minute++)
		{
			/* printing hour and minutes using _putchar */
			_putchar('0' + hour / 10);
			_putchar('0' + hour % 10);
			_putchar(':');
			_putchar('0' + minute / 10);
			_putchar('0' + minute % 10);
			_putchar('\n');
		}
	}
}
