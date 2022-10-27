#include "main.h"
/**
 *reverse_array - func that reverses the content of an array of integers
 *@a: array to be reversed
 *@n: number of elements in the array
 *Description: Reversing contents of an array of integers
 *Return: 0
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	n = n - 1;
	while (i <= n)
	{
		temp = a[i];
		a[i++] = a[n];
		a[n--] = temp;
	}
}
