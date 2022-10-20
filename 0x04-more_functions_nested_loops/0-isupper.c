#include "main.h"
#include <stdio.h>

/**
 * _isupper - checking for uppercase character
 * Return: 1 if c is uppercase and 0 otherwise
 * @c: character to test
 */

int _isupper(int c)
{
	char c;

	c = 'A';
	{
		printf("%c: %d\n", c, _isupper(c));
	}
	c = 'a';
	{
		printf("%c: %d\n", c, _isupper(c));
	}
	return (0);
}

