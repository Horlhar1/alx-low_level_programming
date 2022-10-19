#include <stdio.h>
/**
 * main - Global variables and Local Variables
 * Return: 0
 */
/* This G here is a global variable */
int G = 50;

int main(void)
{
	/*The following characters are Local Variables inside the main function*/
	int a = 10;
	int b = 5;
	int c = 15;
	G = 20;
	/* Proving changing of Global Variable G inside main function will */
	/* overwrite Global Variable G outside main function */
	int sum = a + b + c + G;

	printf("The sum total of all variables is: %d\n", sum);

	return (0);
}
