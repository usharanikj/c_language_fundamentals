#include <stdio.h>

int main()
{

/*
Multiple if Statements: Use when you want both conditions to run if true.
Example Behavior: If age ≥ 18 → Adult discount. If age ≥ 65 → Senior discount. Someone aged 70 gets both messages.
Key Point: Each if is checked independently.
*/

	int age1;
	printf("Please enter your age: ");
	scanf("%d", &age1);

	// Adult discount check:
	if(age1 >= 18)
	{
		printf("You are eligible for the adult discount!\n");
	}
 
	// Senior discount check:
	if(age1 >= 65)
	{
		printf("You are also eligible for the senior discount!\n");
	}	

/*
if / else if Structure: Use when you want only one condition to execute.
Example Behavior: 18 ≤ age < 65 → Adult discount. age ≥ 65 → Senior discount only. Age below 18 prints nothing.
Key Point: else if prevents the second condition from running once one is true. Avoid plain else if you don’t want age < 18 included accidentally.
*/
	
	int age2;
	printf("Please enter your age: ");
	scanf("%d", &age2);

	// Adult discount only if 18 ≤ age < 65:	
	if (age2 >= 18 && age2 < 65)
	{
		printf("You are eligible for the adult discount!\n");

	// Senior discount only if age ≥ 65
	} else if (age2 >= 65) // Cannot use plain else, or <18 ages would be included. 
	{
		printf("You are eligible for the senior discount!\n");
	}

	return 0;
}

/*
Note: 
Use multiple if statements when multiple conditions can be true.
Use else if when only one result should print
Be careful with plain else—it catches everything not handled above
*/

