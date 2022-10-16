#include <stdio.h>
/**
 * main - Prints the numbers from 00 to 99, numbers separated by a comma,
 *		followed by a space, in ascending order.
 * Return: 0 (Success)
 */
int main(void)
{
	int a, b = '0', c;

	for (a = '0'; a <= '9'; a++)
	{
		for (c = b; c <= '9'; c++)
		{
			if (a != c)
			{
				putchar(a);
				putchar(c);
			}
			if (a == c)
			{
				continue;
			}
			if (a == '8' && c == '9')
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
		b++;
	}
	putchar('\n');

	return (0);
}

