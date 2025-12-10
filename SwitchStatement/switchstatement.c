// Switch statement: Purpose -> To branch based on different values (easier when we are branching on a very clear variable).
// Cases are dfferenet value possiblities for the variable.

#include <stdio.h>

int main()
{	
	// Ask how many slices of pizza the user has eaten:

	int slices;
	printf("How many slices of pizza have you had for the day? ");
	scanf("%d", &slices);

	// Rate their diet:

	switch(slices)
	{
		case 0: // Case number (here, 0) correlates to the value of the input (slices).
			printf("You are doing great!\n");
			break;
		case 1:
			printf("You are doing okay!\n");
			break;
		case 2: 
			printf("You could do better!\n");
			break;
		default:
			printf("You need to stop eating pizzas!\n");
			break;
	}

	// You can have multiple cases for one section of code: Ask how many chocolates the user has eaten.

	int chocolate;
	printf("How many chocolates have you eaten for the day? ");
	scanf("%d", &chocolate);

	// Rate  their health:

	switch(chocolate)
	{
		case 0:
		case 1:
		case 2: // When you want to check <=2 and execute the same block of code for each one of the cases
			printf("You are doing good!\n");
			break;
		default:
			printf("You need to stop eating chocolates!\n");
			break;
	} 

	return 0;
}
