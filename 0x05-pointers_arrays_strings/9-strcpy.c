#include "main.h"

/**
 *_strcpy - function with two arguments
 *@dest: first argument for a char data type pointer
 *@src: second argument for a char data type pointer
 *
 *Description: copying of string to an array
 *Return: 0 (success)
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
