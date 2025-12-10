#include <stdio.h>

int main()
{

// The unary plus (+) operator does not change the sign of its argument; it simply returns the value as is. It is often used for code clarity rather than functionality. The unary plus is different from the addition operator, as addition requires two operands.

	// Declaring a negative integer:
	int a = -10;

	// Using unary plus to keep value unchanged:
 
	int b = +a; // b = -10
	printf("%i\n", a);
	printf("%i\n", b);

// The minus operator ( - ) changes the sign of its argument. A positive number becomes negative, and a negative number becomes positive. Unary minus is different from the subtraction operator, as subtraction requires two operands.

	// Declaring a positive integer:
	int c = 10;

	// Using - sign to make the value of positive integers negative:

	int d = -c; // d = -10
	printf("%i\n", c);
	printf("%i\n", d);

	return 0;
}
