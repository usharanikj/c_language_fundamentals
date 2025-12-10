// The increment operator ( ++ ) is used to increment the value of the variable by 1. The increment can be done in two ways.

#include <stdio.h>

int main()
{
// Prefix Increment:

	int a = 1;
	int b = ++a; // b = 2 (The increment happens before the assignment)
	// In this method, the operator precedes the operand (e.g., ++a). The value of the operand will be altered before it is used.

// Postfix Increment:
	int c = 1;
	int d = c++; // d = 1 (The increment does not happen until after the assignment) 
	int e = c; // e = 2
	// In this method, the operator follows the operand (e.g., c++). The value of the operand will be altered after it is used.


// Below example shows the implementation of increment ( ++ ):
	int x = 1;
	int y = 1;

	printf("Pre-Incrementing x = %i\n", ++x); // Output: Pre-Incrementing x = 2
	printf("Post-Incrementing y = %i\n", y++); // Output: Post-Incrementing y = 1

// Caleb's example:

	int pizzas_to_eat = 100;
	
	int prefix = ++pizzas_to_eat;
	printf("prefix: %i and pizzas to eat: %i\n", prefix, pizzas_to_eat);

	pizzas_to_eat = 100; // RE-ASSIGN the value, do NOT use 'int' again (which would mean re-defining the variable: will throw an error ).	

	int postfix = pizzas_to_eat++;
	printf("postfix: %i and pizzas to eat: %i\n", postfix, pizzas_to_eat);	

	return 0;
}
