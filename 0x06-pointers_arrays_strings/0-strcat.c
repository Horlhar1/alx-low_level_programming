#include "main.h"
/**
 *_strcat - func that concatenates two strings together
 *@src: char[] to append or add to dest
 *@dest: char[] to be appended to
 *Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] += src[j];
		i++;
		j++;
	}

	dest += '\0';

	return (dest);
}
