#include <stdio.h>

int main()
{
	// Implicit type promotion:
 	// An example of a cast that doesn't lose data:

	float x = 50.0f;

	printf("%f\n", x); // The printf() function takes a double. Thus, x gets promoted to a double ie., the value of x gets stored as a double inside the printf() function's parameter. Parameters refer to the variables listed in a function's declaration, defining the input that the function can accept. Arguments, however, are the actual values passed to the function when it is called, filling the parameters during execution. Here, "%f\n" and x are the arguements. 

	return 0;
}
