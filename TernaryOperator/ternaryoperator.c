#include <stdio.h>

int main()
{

	// An app that tell you if you have enough money to purchase a product:

	double money;
	double cost;
	printf("This app tells you if you have enough money to purchase something.\nEnter how much money you have: ");
	scanf("%lf", &money);
	printf("Enter the cost of the product: ");
	scanf("%lf", &cost);

	// Ternary operator/ Conditional operator:

	money >= cost ? printf("You can afford!\n") : printf("Sorry! You need %lf more dollars!\n", cost - money);
	
	// Achieving the same using an if statement:

	if(money >= cost)
	{
		printf("You can afford!\n");
	}
	else
	{
		printf("Sorry! You need %lf more dollars!\n", cost - money);
	}

	return 0;
}
