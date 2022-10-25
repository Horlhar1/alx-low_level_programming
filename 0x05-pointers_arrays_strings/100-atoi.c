#include <stdlib.h>
#include "main.h"

/**
 *_atoi - function that converts a string to an integer
 *         can also be found in (stdlib.h) run main atoi
 *
 *@s: string to convert
 *Return: value of integer
 *Description: converting a string to an integer
 */

int _atoi(char *s)
{
	int i, j, n, m;

	i = n = 0;
	m = 1;
	while ((*(s + i) < '0' || *(s + i) > '9') && (*(s + i) != '\0'))
	{
		if (*(s + i) == '-')
			m *= -1;
		i++;
	}
	j = 1;
	while ((*(s + j) >= '0') && (*(s + j) <= '9'))
	{
		n = n * 10 + m * (*(s + j) - '0');
		j++;
	}
	return (n);
}
