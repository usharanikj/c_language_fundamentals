/* 
Function Definition: A block of code that performs a specific task.
	Syntax: return_type function_name(parameter_list) { // code block }
Function Call: Executing the code within the function's definition.
Return Type: Specifies the type of value the function sends back (returns) to the calling code.
	int: The function returns an integer value.
	void: The function performs an action but doesn't return a value.
*/

#include <stdio.h>

// Example 1: factorial (Value-Returning Function):

int factorial(int number)
{
	int result = 1;
	for(int i = number; i > 0; i--)
	{
		result *= i; // Shorthand for: result = result * i;
	}
	return result;
}

// Example 2: factorial_output (Action/void Function): This function is used for an action (printing to the console) and doesn't return a value.

void factorial_output(int input)
{
	printf("The factorial of %d is %d\n", input, factorial(input)); 
	// Note: No return statement needed, or allowed, unless it's a simple 'return;' to exit early.
}

// Key Point: Since factorial_output is void, a call to this function is used as a standalone statement (e.g., factorial_output(2);). It cannot be used in an expression.

int main()
{

/*
Example 1: factorial (Value-Returning Function):
Because the function returns an int, you can use the function call in any expression or statement where an int would normally be used.
								   (or)
Whenever you have a function that returns a data type such as int, you can use a call to that function anywhere the program expects a value of type int. 
*/
// 1. Using a value-returning function (factorial) as an argument:
	printf("%d\n", factorial(5)); // The function call is an argument to printf.
	printf("%d\n", factorial(factorial(3))); // The inner call (factorial(3) is calculated first, then the outer call (factorial(6).
	
// 2. Calling an action function (factorial_output) as a statement:
	factorial_output(2);
	factorial_output(3);
	factorial_output(4);

// 3. Using a loop to call the action function repeatedly:

	for(int i = 0; i < 10; i++)
	{
		factorial_output(i);
	}
	return 0;
}


	
/*x
Function design:
1. Don't output to the console inside of a function. Remove anything that is going to limit the use of a function. 
2. Make the functions have one use/ function. As functions become bigger, they become less useful. Thus, make functions as general as possible.

Parameter: Local variable to a function (ie., variable on the inside of a function).
Arguement: A variable/value passed into the function (ie., the data we pass to the parameter).
Return type: Defining the type of output we are expecting from a function.
Return statement: Where we give it a value(the actual data passed out of the function). 

The only way to change a parameter is via a pointer. ????  

Note: You can use print statements inside a function while debugging.
*/
