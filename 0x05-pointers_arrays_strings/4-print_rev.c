#include "main.h"

/**
 * print_rev - function with an argument
 * @s: a char data type of argument
 * Description: printing strings in reverse
 *Return: null
 */

void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	i -= 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	putchar('\n');
}
