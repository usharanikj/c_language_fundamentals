// The decrement operator ( -- ) is used to decrement the value of the variable by 1. The decrement can be done in two ways.

#include <stdio.h>

int main()
{
// Prefix Decrement: In this method, the operator precedes the operand (e.g., - -a). The value of the operand will be altered before it is used.
	int a = 1;
	int b = --a; // b = 0 

// Postfix Decrement: In this method, the operator follows the operand (e.g., a- -). The value of the operand will be altered after it is used.
	int c = 1;
	int d = c--; // d = 1
 	int e = c; // e = 0

// Below example shows the implementation of decrement (--):
	int x = 1;
	int y = 1;
	printf("Post-Decrementing x = %i\n", x--);
	printf("Pre-Decrementing y = %i\n", --y);

	return 0;
}

