#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @y: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int y)
{
	/** a is to represent the declaration of y to print last digit */
	int a;

	a = (y % 10);

	if (a < 0)
	{
		a = (-1 * a);
	}

	_putchar(a + '0');
	return (a);
}
