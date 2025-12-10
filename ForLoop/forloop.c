#include <stdio.h>

int main()
{

	int max;
	printf("Enter a whole number: ");
	scanf("%d", &max);

	printf("The count from 0 upto and including %d: \n", max);
	for (int i = 0; i < max +1; i++) // Edge cases are usually where programs break (eg: If you are going just one pase the end of an array, you are going to access an area of memory that you are not allowed to access))
	{
		printf("%d\n", i);
		
	}

	return 0;
}
