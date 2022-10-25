#include <stdio.h>

/**
 *swap_int - function that swaps the value of two integers
 *@a: first integer argument/declaration
 *@b: second integer argument/declaration
 *Return: 0 (success)
  */

void swap_int(int *a, int *b)
{
	int change;

	change = *a;
	*a = *b;
	*b = change;
}
