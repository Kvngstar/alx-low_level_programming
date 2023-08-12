#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
		print("id is positive\n", n)
	else if(n==0)
		print("id  is zero\n", n)
	else
		print("id id negative\n", n)	
	return (0);
}
