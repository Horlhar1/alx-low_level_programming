#include <stdio.h>
/**
 * main - This is just for testing
 * Return: 0 (success)
 */
/*Function declaration of Function prototype */
int bamboozle(int particle1, int particle2, int particle3, int particle4);

int main(void)
{
	int boss = bamboozle(20, 20, 20, 20);
	printf("The sum total is: %d\n", boss);
	
	return (0);
}
/* Function Definition of function prototype */
int bamboozle(int particle1, int particle2, int particle3, int particle4)
{
        int bamboozle = particle1 + particle2 + particle3 + particle4;
        return bamboozle;
}
