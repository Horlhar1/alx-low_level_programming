#include "main.h"
/**
 * print_alphabet_x10 - printing lowercases alphabets in ten lines
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	int n, lo;

	lo = 0;

	while (lo < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		lo++;
		_putchar('\n');
	}
}
