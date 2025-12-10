#include <stdio.h>

int main()
{

	int slices = 15;
	int people = 2;
	double splitting_pizza_slices = (double) slices / people;  
// In C, the explicit cast operator (type) is a Unary Operator and belongs to the second-highest precedence level (level 2). The division operator '/' is a Multiplicative Operator and is at a lower precedence level (level 3).

	// Two ways of typecasting: 
	// 1. Add .0 to a constant
	// 2. Explicit typecasting

	printf("%lf\n", splitting_pizza_slices);  

	double x = 25/2 * 2;
	double y = 25/2 * 2.0;
// Just because one of the operands in your arithmetic expression is a double doesn't necessarily mean you are going to get the results you are expecting

	printf("%lf\n", x); // Output: 24.000000
	printf("%lf\n", y); // Output: 24.000000

// Decimal is always truncated when you do integer division:
	// 0.99999999 becomes 0.
	// 23.44444 becomes 23. 

	return 0;
}

// Casting is a way to change the data type of a value. When you change a decimal value to an integer value, the decimal is always truncated (not rounded). 
