#include <stdio.h>

int main()
{
	// for loop initialization part done earlier
	int max;
	printf("Enter a whole number: ");
	scanf("%d", &max); // initialized max using scanf

// We could count down:

	printf("Decrementing/ Counting down by 1: \n");
	for (; max > 0; max--) // All three sections(initialization, condition, and update) are optional syntactically.
	{
		printf("%d\n", max);
	}

// We could count down by 2:

	printf("Enter a whole number: ");
	scanf("%d", &max); 
	printf("Counting down by 2: \n");

	for (; max > 0; max = max - 2)
	{
		printf("%d\n", max);
	}

/*
Infinite loops can occur when you assume the loop update will eventually meet the stopping condition.
In the example below, subtracting 2 will reach 0 only when the initial value is even.
If the input is odd, the value skips past 0 into negative numbers and the loop condition (max != 0) never becomes false, resulting in an infinite loop.
*/

	printf("Enter a whole number(Odd number --> Infinite loop/ programme breaks. Even number --> Programme works fine): ");
	scanf("%d", &max); 

	for (; max != 0; max = max -2)
	{
		printf("%d\n", max);
	}

	return 0;
}
