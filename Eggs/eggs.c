#include <stdio.h>

int main()
{

	int EggsProduced;
	printf("Please enter the number of eggs produced: ");
	scanf("%i", &EggsProduced);

	double Dozen = (double) EggsProduced / 12;
	
	// Instead of type casting, we could also do EggsProduced/12.0 as we are hard coding the number 12 here.
	
	printf("The number of dozens of eggs produced is: %lf\n", Dozen);

	return 0;
}
