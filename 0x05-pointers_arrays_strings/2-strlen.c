#include "main.h"

/**
 *_strlen - printing length of strings with function
 *@s: pointer of type char
 *Return: string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
