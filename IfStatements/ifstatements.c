#include <stdio.h>
#include <stdbool.h>

int main()
{
	bool is_pizza_healthy;
	int temp;
	printf("Is pizza healthy? Enter 1 for True and 0 for False: ");
	scanf("%i", &temp);
	is_pizza_healthy = temp;

	if (2.32) // True as long as not zero (the error message you see when you run the program tells you the same). While the user's input dictates the value of is_pizza_healthy, this variable is not actually used in the if statement, which is why the program ignores the input and prints the message anyway. 

	{
		printf("Welcome to my pizza app!\n");
	}

	bool is_usha_fat;
	int response;
	printf("Is usha fat? Enter 1 for true and zero for false: ");
	scanf("%i", &response);
	is_usha_fat = response;
	
	if (is_usha_fat)
	{
		printf("Please hit the gym!\n"); // Code runs as long as the input is not zero.
	}

	return 0;
}

// Note: Make sure you follow your indentations. You don't want to descope things by forgetting a curly brac by mistake. Also, be consistent with where you put your comments. 
