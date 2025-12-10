#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{
	int input;
	printf("Enter a whole number: ");
	scanf("%d", &input);

	int prime_numbers_count = 0;
//	bool is_prime = true;


	for(; input > 1; input--)
	{
		bool is_prime = true;
//		printf("The divisors we are using to check if %d is prime are: ", input);
		for(int i = sqrt(input); i > 1; i--)	
		{
//			printf("%d ", i);
			if(input % i == 0)
			{
				is_prime = false;
			}	
		} 
	
		if(is_prime)
		{
			printf("Result: %d is prime!\n", input);
			prime_numbers_count++;
		}
//		else
//		{
//			printf("\nResult: %d is not prime!\n", input);
//		}
	}
	printf("The total number of primes are: %d\n", prime_numbers_count);
	return 0;
}

/*
The commented-out lines of code were originally used to build the program step by step. I first worked on determining whether a single number was prime, and then progressed to identifying all prime numbers from zero up to that number, listing them along with the total count of primes.
*/

/*
The initial code sets is_prime = true only once, outside the loop over input.
That means once a number is found not prime, all later numbers will also be marked “not prime.”
Need to reset is_prime = true inside the main loop, otherwise the logic won’t work correctly.
*/


/*
Program optimization, code optimization, or software optimization:
1. You only need to check prime factors. For example, for something to be divisible by 10, it would also have to be divisible by 2 and by 5, so having checked those, you dont need to check any of their products. 

2. You only need to check primes up to the square root of the number you are trying to factor. This is because if you have one factor larger than the square root, the other factor will have to be smaller, so you will find it first. 
(Have made use of the second concept in the above programme)
*/


/* 
Use of FLAG in programming:
In programming, a "flag" is a variable used to signal a specific condition, state, or option within a program. It acts as an indicator, influencing the program's flow or behavior based on its value.

Key characteristics of flags:

1. Signaling: Flags primarily serve to signal that a particular event has occurred, a condition has been met, or a certain option is enabled or disabled.

2. Boolean Nature: While flags can technically be any data type, they are most commonly boolean variables (true/false, 1/0), representing the presence or absence of a condition.

3. Controlling Program Flow: Flags are frequently used in conditional statements (like if-else or switch) and loops to determine which code blocks to execute or when to terminate a loop.

How flags are used:
Initialization: A flag is typically initialized to a default state (e.g., false or 0).
Modification: During program execution, the flag's value is changed when the corresponding condition is met or the desired state is reached.
Checking: Other parts of the program then check the flag's value to make decisions or modify their behavior.

Example in Python:

search_successful = False
items = [1, 2, 3, 4, 5]
target = 3

for item in items:
    if item == target:
        search_successful = True  # Set the flag
        break

if search_successful:
    print("Target found!")
else:
    print("Target not found.")

*/
