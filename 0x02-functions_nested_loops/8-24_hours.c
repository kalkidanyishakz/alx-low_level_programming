#include "main.h"

/**
* jack_bauer - prints every minute of the day of Jack Bauer,
* starting from 00:00 to 23:59.
*
* Return: none.
*/

void jack_bauer(void)
{
	int n, i, j, k;

	for (n = 0; n <= 2; ++n)
	{
		for (i = 0; i <= 9; ++i)
		{
			for (j = 0; j <= 5; ++j)
			{
				for (k = 0; k <= 9; ++k)
				{
					_putchar ('0' + n);
					_putchar ('0' + i);
					_putchar (':');
					_putchar ('0' + j);
					_putchar ('0' + k);
					_putchar ('\n');
				}
			}
			if (n == 2 && i == 3)
				break;
		}
	}
}
