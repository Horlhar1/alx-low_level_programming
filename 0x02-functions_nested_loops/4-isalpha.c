#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character
 * Return: 1 if char(c) is a letter (lower or uppercase), 0 otherwise
 * @c: single letter input
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
