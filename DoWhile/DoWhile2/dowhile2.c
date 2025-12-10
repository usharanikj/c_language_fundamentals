#include <stdio.h>

int main()
{
// The do/while loop is a variant of the while loop. This loop will execute the code block once, before checking if the condition is true, then it will repeat the loop as long as the condition is true.

// The example below uses a do/while loop. The loop will always be executed at least once, even if the condition is false, because the code block is executed before the condition is tested:

	int i = 0;

	do 
	{
		printf("%d\n", i);
		i++; // Do not forget to increase the variable used in the condition, otherwise the loop will never end!
	} while (i < 5);
	
/* Condition is False from the Start:
In the example above, the condition i < 5 was true at the beginning, so the loop executed multiple times. But what if the condition is false right from the start?
In the example below, the variable k starts at 10, so the condition k < 5 is false immediately - yet the do/while loop still runs once:
*/

	int k = 10;

	do 
	{
		printf("Loop executed: k starts at %d, yet the do/while loop runs once!\n", k);
		k++;
	} while (k < 5);
/* 
The do/while loop always runs at least once, even if the condition is already false. This is different from a regular while loop, which would skip the loop entirely if the condition is false at the start.
This behavior makes do/while useful when you want to ensure something happens at least once, like showing a message or asking for user input.
*/

// Practical Example: User Input (This example keeps asking the user to enter a positive number. The loop stops when the user enters 0 or a negative number:)
	
	int number;

	do 
	{
		printf("Enter a positive number: ");
		scanf("%d", &number);
	} while (number > 0);


	return 0;
}
