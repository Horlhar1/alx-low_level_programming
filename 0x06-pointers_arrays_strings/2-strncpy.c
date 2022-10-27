#include "main.h"
/**
 *_strncpy - func that copies a string
 *@dest: pointer to be copied string
 *@src: pointer to the string to be copied
 *@n: int data_type
 *Return: destination of copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
