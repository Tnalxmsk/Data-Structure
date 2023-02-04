#include <stdio.h>

int Factorial(int n) 
{
	if (n == 0)
		return 1;
	else
		return n * Factorial(n - 1);
}

int main(void)
{
	printf("%d \n", Factorial(10));
	printf("%d \n", Factorial(9));
	printf("%d \n", Factorial(4));

	return 0;
}