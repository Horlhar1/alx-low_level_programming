#include "main.h"

/**
 *print_array - function with an argument
 *@a: first argument for a pointer of int data type
 *@n: second argument of int data type
 *
 *Description: a function that prints n elements of an array of integers,
 *		followed by a new line.
 *Return: 0 (success)
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
