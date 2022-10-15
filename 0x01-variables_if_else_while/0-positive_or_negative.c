#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/* more headers go there */
/**
 * main - printing positive or negatives
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		/*if this is true then print*/
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
		/*if true, ptint*/
	{
		printf("%d is zero\n", n);
	}
	else
		/*if true, print*/
	{
		printf("%d is negative\n", n);
	}
		return (0);
}
