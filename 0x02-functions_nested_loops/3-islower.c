#include "main.h"
/**
 * _islower - For finding and getting lowercase numbers
 * Return: 0 (success)
 * @c: letter output and im=nput
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
