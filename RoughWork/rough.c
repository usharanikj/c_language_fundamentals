#include <stdio.h>

int main()
{   

	/* 1. 
	Independent if statement: In C programming, the else block is completely optional.
	You can use an if statement entirely on its own. If the condition inside the parenthesis is true, the code executes. 
	If it is false, the program simply skips that block and continues to the next line of code.
	*/	

	int score = 85;
	if(score >= 50) 
	{
		printf("Congratulations! You passed.\n");
	}
	printf("This line always prints.\n");
    

	// 2. Inside of a function, you could pass in a string value using "" and a character value using ''.
	printf("%s\n", "Usharani K J");
	printf("%c --> %i\n", 'A', 'A');

	int x = 5;
	double y = (double) x;
	printf("%i, %lf\n", x,  y);
	
	double a = 3.25;
	int b = a;
	printf("%lf, %i", a, b);

	printf("%lf\n", y);


	// 3. Printing a character as an integer:
	char mychar = 'A';
	printf("%i\n", mychar);
 
	char mystring[15] = "Usharani K J"; 
	printf("%s\n", mystring); // Can print full name
 
	char myname[15];
	printf("Please enter your full name: ");
	scanf("%s", myname); // Can't scan full name
	printf("%s\n", myname); // Input: Usharani K J, Output: Usharani.














	return 0;
}
