#include <stdio.h>

int factorial(int number)
{
	// factorial = 5! 5 * 4 * 3 * 2 * 1 = 5!
	int factorial = 1;

	for (int i = number; i > 1; i--)
	{
		factorial *= i;
		// factorial = factorial * i;
	}
	return factorial;
}

void outputFactorial(int input)
{
	printf("The factorial of %d is %d.\n", input, factorial(input));
}

void main()
{
	for (int i = 0; i < 10; i++)
	{
		outputFactorial(i);
	}
}
