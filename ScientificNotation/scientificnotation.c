#include <stdio.h>

int main()
{
	// dogs = 25000 (decimal notation)
	int dogs = 2.5e4; // hardcoding (scientific notation)

	printf("%i\n", dogs);

/*
1. Variable Type: The variable dogs is explicitly declared as an int (integer). Integers store whole numbers only.
2. Value Type (Literal): The value 2.5e4 is a floating-point literal. In C, a number with a decimal point (even if it's implicitly 25000.0) or one expressed in scientific notation (e or E) is treated as a double by default. 2.5e4 is equivalent to 2.5 times 10^4 = 25,000.0.
The value starts as a floating-point number, but it is implicitly converted (or cast) to an integer when assigned to the int variable. When converting a floating-point number to an integer, C truncates the value.
*/


	// Taking user input:

	double Dogs;
	printf("How many dogs do you have? ");
	scanf("%lf", &Dogs);

	printf("%f\n", Dogs); //The %f format specifier prints a double in decimal notation with a default precision of six decimal places

	printf("%e\n", Dogs); //The %e format specifier prints a double in scientific notation (mantissa * 10^exponent), also with a default precision of six decimal places.

	printf("%g\n", Dogs); //The %g format specifier is used in functions like printf and scanf in C to handle floating-point numbers (type float or double) in a compact, general format.

	return 0;
}
