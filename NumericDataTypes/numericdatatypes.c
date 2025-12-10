#include <stdio.h>

int main()
{
	// Integer data type

	int dogs = 6; // Whenever you have things that can not be divided, you will want to use int data type. 
	

	// Floating point numbers: Double and Float data types 

	// Precsion -->  How much data the variable can hold
	// Double has double the precision
	// Doubles take up twice as much space  


	// Format specifiers/ conversion character for all of these data types:

	printf("%i, %f, %f\n", 3, 1111.1111, 1111.1111F);

	// The reason you use %f for both float and double in printf() is due to Default Argument Promotion rules.
	/* The %lf specifier (for long float) is technically the correct specifier for a double in some contexts, but in printf(), it is often treated as equivalent to %f due to this promotion rule. Many programmers use %lf for double to maintain consistency with scanf().*/


	// Output: 3, 1111.111100, 1111.111084 --> This problem has to do with how numbers are stored on computers. They are stored in base 2.
	//If we kept adding data to our numbers, eventually the double data type is going to get messed up too. 

	return 0;
}
