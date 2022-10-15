#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/* more headers goes there */
/**
 * main - Making strings and lines of variables
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int y;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	y = n % 10;
	printf("Last digit of %d is %d and is ", n, y);
	if (y > 5)
		printf("greater than 5\n");
	else if (y == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");
	return (0);
}

