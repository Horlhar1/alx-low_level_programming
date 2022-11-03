#include "main.h"
/**
 *_strlen_recursion - func that returns the length of a string
 *@s: string to measure and return.
 *
 *Return: Success.
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion((s + 1)));
	return (0);
}

