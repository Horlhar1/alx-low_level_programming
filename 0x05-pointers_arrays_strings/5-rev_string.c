#include "main.h"

/**
 * rev_string - func reverses a string
 * @s: string to reverse
 * Description: This is a function that reverses a string
 * Return: The string
 */

void rev_string(char *s)
{
	int i, k, oh, wow;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	k = 0;
	wow = i;
	i--;
	while (k < wow / 2)
	{
		oh = s[k];
		s[k] = s[i];
		s[i] = oh;
		i--;
		k++;
	}
}
