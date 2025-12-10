// Correlation between ASCII and integers: Convert an integer ASCII code to its corresponding ASCII character and vice versa.

#include <stdio.h>

int main()
{
	char MyChar;
	printf("Enter a character: ");
	scanf("%c", &MyChar);
	printf("The integer value associated with the character entered is %i.\n", MyChar);
	
	int MyInt;
	printf("Enter an integer value between 0-127: ");
	scanf("%i", &MyInt);
	printf("The character associated with the integer enetered is %c.\n", MyInt);
	
/* Note on the code above: Control characters in the range of 0 to 31 are primarily used for controlling devices (like terminals, printers, or early computers) and are generally not printable characters that you would see on a screen, unlike letters, numbers, or symbols.
Since these characters don’t have a visible glyph or symbol associated with them (they are commands), your terminal prints nothing or a space. */
	
// Doing math with characters:

	printf("Math with ASCII characters:\n");
	char math = 'A' + '\t';
	printf("A(65) + \\t(9) = %c(%i)\n", math, math); 	

	return 0;
}
