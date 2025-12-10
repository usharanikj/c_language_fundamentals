// The same lines of code without the comments:

#include <stdio.h>

int factorial(int number)
{
	int result = 1;
	for(int i = number; i > 0; i--)
	{
		result = result * i;
	}
	return result;
}

void factorial_output(int input)
{
	printf("The factorial of %d is %d\n", input, factorial(input));
}

int main()
{

	printf("%d\n", factorial(5));
	printf("%d\n", factorial(factorial(3)));


	factorial_output(3);
	factorial_output(5);

	for(int i = 0; i < 10; i++)
	{
		factorial_output(i);
	}
	return 0;
}
