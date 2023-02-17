#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int n;

	strand(time(0));
	n=rand() - RAND_MAX / 2;
	if (n > 0){
		printf("%d\n", is positive);
	} else if (n == 0){
		printf("%d\n", is zero);
	} else{
		printf("%d\n", is negative);
	}
	return (0);
}
