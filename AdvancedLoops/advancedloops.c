/*
#include <stdio.h>

int main()
{
	int max;
	printf("Enter a whole number: ");
	scanf("%d", &max);

	for (int i=0; i < max; i++)
	{
	printf("%d\n", i);
	}

	return 0;
}
*/

// Task: Append to the programme above to say "You printed __ numbers" and "You printed up to the number __" by using the i variable. 

// Aprroach 1: Wouldn't work. This has to do with variable scope.
 
/*
#include <stdio.h>

int main()
{

	int max;
	printf("Enter a whole number: ");
	scanf("%d", &max);
	
	for (int i = 0; i < max; i++)
	{
		printf("%d\n", i);
	}

	printf("You printed %d numbers\n", i);
	printf("You printed up to the number %d\n", i-1);
	
	return 0;
}
*/

// Approach 2:

#include <stdio.h>

int main()
{
	int max;
	printf("Enter a whole number: ");
	scanf("%d", &max);
	
	int i; // The variable is now declared outside the for loop. You can also choose to initialize it here.
	for (i = 0; i < max; i++)
	{
		printf("%d\n", i);
	}
	
	printf("You printed %d numbers\n", i);
	printf("You printed up to the number %d\n", i - 1); // Since i++ occurs before the comparison, i is incremented just before the for loop ends. Thus, you need to subtract 1 from i.  
	
	return 0;
}
