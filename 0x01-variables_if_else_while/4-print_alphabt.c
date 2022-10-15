#include <stdio.h>
/**
 * main - omit q and e from function
 * Return: 0 (success)
 */
int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		if (letters != 'e' && letters != 'q')
			putchar(letters);
	}

	putchar('\n');


	return (0);
}
