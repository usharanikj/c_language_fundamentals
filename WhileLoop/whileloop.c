#include <stdio.h>

int main()
{

	int i = 0; // initialization

	while(i < 11) // comparison
	{
		i++;
		printf("%d ", i);
		i++; // update
	}
	printf("\n");


	// Doing the above using a for loop:

	for(int k = 0; k < 11; k++) // initialization, comparison, update  
	{
		k++;
		printf("%d ", k);
	}
	printf("\n");

// Note: A while loop offers better structural clarity. It makes the logic of an infinite loop with a specific exit condition much easier to read.

	return 0;
}
