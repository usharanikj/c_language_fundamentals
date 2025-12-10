#include <stdio.h>

int main()
{
	int character_variable1;
	character_variable1 = 'A'; // Stored as 65
	printf("The character hard coded is %c\n", character_variable1); // Outputted as 'A'

	printf("Please enter a character: ");
	char character_variable2;
	scanf("%c", &character_variable2); //Couldn't do 'int character_variable' here as the compiler threw an error when I tried to store a character value inside of it using scanf(). What is happening? While C often allows you to store the ASCII value of a character inside an int, scanf is strict about the pointer type it expects with %c. On some systems, this mismatch can lead to unexpected behavior, even if the case structure seems correct.

	// Using a switch statement on character_variable2: 
	
	switch(character_variable2) //Testing for character values
	{
		case ('A'):
			printf("The character value entered is A.\n");
			break;
		case ('1'):
			printf("The character value entered is 1.\n");
			break;
		default:
			printf("The character value entered is neither A nor 1.\n");
			break;
	}

	switch(character_variable2) //Testing for corresponding integral values inside case() -> ie., 'A' and '1' 
				    //Can use corresponding integral values inside case() even though the values stored inside the variable are character values.
	{
		case(65):
			printf("The character value entered is A.\n");
			break;
		case(49):
			printf("The character value entered is 1.\n");
			break;
		default:
			printf("The character value entered is neither A nor 1.\n");
			break;
	}
	
	return 0;
}
