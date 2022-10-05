#include "main.h"
/**
 * jack_bauer - print min and hrs
 * print mins to hrs from 00:00 - 23:59
 * Return: 0
 */
void jack_bauer(void)
{
	 int hrs = 0;
	 int mins = 0;
	 int hrs_last;
	 int mins_last;

	while (hrs <= 23)
	{
		while (mins <= 59)
		{
			mins_last = mins % 10;
			hrs_last = hrs % 10;
			_putchar(hrs / 10 + '0');
			_putchar(hrs_last + '0');
			_putchar(':');
			_putchar(mins / 10 + '0');
			_putchar(mins_last + '0');
			mins++;
			_putchar('\n');
		}
		hrs++;
		mins = 0;
	}
}
