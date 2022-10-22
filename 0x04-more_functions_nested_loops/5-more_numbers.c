#include "main.h"

/**
 * more_numbers - printing numbers
 * Return: 0-14 in 10 lines
 */

void more_numbers(void)
{
	int c, b;

	for (c = 1; c <= 10; c++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b >= 10)
			_putchar('1');
			_putchar(b % 10 + '0');
		}
		{
			_putchar('\n');
		}
	}
}

