#include <stdio.h>
/**
 * main - printing all hexadecimals using putchar only
 * Return: 0 (Success)
 */
int main(void)
{
	int nums;
	char letters;

	for (nums = 0; nums < 10; nums++)
		putchar((nums % 10) + '0');

	for (letters = 'a'; letters <= 'f'; letters++)
		putchar(letters);

	putchar('\n');

	return (0);
}
