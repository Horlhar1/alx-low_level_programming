#include "main.h"

/**
 * puts2 - function with argument
 * @str: char type of argument
 * Description: printing of one character(char) out of 2 in a string
 * Return: 0 (always)
 */

void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
		i++;
	}
	_putchar('\n');
}
