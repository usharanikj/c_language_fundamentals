#include <stdio.h>

int main()
{
	int input; // declare the variable before the do/while loop
	do
	{
		printf("Enter a number from 0 to 9: ");
		scanf("%d", &input);
	} while(input < 0 || input > 9);

	return 0;
}

/*
You cannot declare a variable inside the do block and then use that variable in the while condition.
Variables declared inside do { ... } are local to that block.
They do not exist outside the block, so the compiler cannot see them when evaluating the while condition.
*/
