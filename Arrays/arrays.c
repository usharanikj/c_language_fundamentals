#include <stdio.h>

int main()
{
	// Creating an array:

	int grades[5]; // If you declare an array without initialization, you must specify the size.

	grades[0] = 11;
	grades[1] = 20;
	grades[2] = 15;
	grades[3] = 21;
	grades[4] = 12;

	printf("%d\n", grades[0]); // grades[0] --> This accesses the element at index 0 of the grades. printf("%d", grades[0]); --> This uses the printf() function to display the value of grades[0].


	// Creating an array:

	int my_grades[] = {11, 12, 13, 14, 15, 16, 17, 18}; // The size is automatically determined by the compiler when you initialize the array using a list of values (initializer list) enclosed in curly braces --> aggregate initialization or initializer list initialization

	printf("%d\n", my_grades[0]);


	// You can also print all elements using a loop:

	int size = 6;
	int my_array[size];
	my_array[0] = 10;
	my_array[1] = 11;
	my_array[2] = 12;
	my_array[3] = 13;
	my_array[4] = 14;
	my_array[5] = 15;

	for(int i = 0; i < size; i++)
	{
		printf("%d ", my_array[i]);
	}
	
	printf("\n");

	return 0;
}
