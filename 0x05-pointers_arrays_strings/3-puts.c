#include "main.h"

/**
 * _puts - function with just an argument
 * @str: a char type argument
 * Description: printing of a string that is followed by a new line
 * Return: none
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
