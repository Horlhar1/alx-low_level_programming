#include "main.h"

/**
 *puts_half - function with an argument
 *@str: char type of variable
 *Description: printing of half of a string
 *Return: 0 Always
 */

void puts_half(char *str)
{
	int i, hey;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	hey = i;
	if (hey % 2 != 0)
		hey = (hey + 1) / 2;
	else
		hey /= 2;
	while  (hey < i)
	{
		hey++;
		_putchar(*(str + hey - 1));
	}
	_putchar('\n');
}
