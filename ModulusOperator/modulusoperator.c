#include <stdio.h>

int main()
{
	int pieces_of_pizza = 5;
	int number_of_eaters = 2;
	int left_over = pieces_of_pizza % number_of_eaters;

	printf("Left over pizza pieces: %i\n", left_over);

 // The modulus operator is a very common and efficient way to determine if an integer is odd or even in programming and mathematics. 

/* 
(Integer / 2) = 0 --> Even
(Integer / 2) = 1 --> Odd

Odd number: 2(k) + 1
Even number: 2(k) 
 */
	
	return 0;
}

// In C or C++, the modulo operator (also known as the modulus operator), denoted by %, is an arithmetic operator.
// % is a binary operator.
// The modulo division operator produces the remainder of an integer division which is also called the modulus of the operation.
