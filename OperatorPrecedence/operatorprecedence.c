// There is a systematic way as to figure out how expressions are going to be evaluated.

#include <stdio.h>

int main()
{
	int x, y;
	x = y = 5; // The equal signs here have equal precedence and the evaluation happens from right-to-left.
	printf("x = %i and y = %i\n", x, y);
	// Operator precedence: y = 5 then x = y.

	x = 20;
	y = 10;
	int z = -y + x; // The negation of y first. 
	printf("z = %i\n", z);

	return 0;
}
