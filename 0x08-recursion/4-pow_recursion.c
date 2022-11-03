#include "main.h"
/**
 *_pow_recursion - function that returns the value of x
 *			raised to the power of y.
 *@x: value that contains the power of the other(y)
 *@y: value to be powered
 *Return: Success
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (!y)
		return (1);
	return (x * _pow_recursion(x, --y));
}
