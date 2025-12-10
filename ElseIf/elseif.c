// An application for doctor's office with 4 menu options (we are going to take numbers as inputs)
// 1. Add a patient
// 2. View a patient
// 3. Search a patient
// 4. Exit

#include <stdio.h>

int main()
{
	printf("Choose a menu option from 1-4:\n1. Add a patient\n2. View a patient\n3. Search a patient\n4. Exit\n");
	int user_input;	
	scanf("%d", &user_input);

	// Note: When you hit the if() statement, only one of the following is ever going to be executed at once, not multiple of them. 
	if(user_input == 1)
	{
		printf("Adding a patient...\n");
	}else if(user_input == 2)
	{
		printf("Viewing a patient...\n");
	}else if(user_input == 3)
	{
		printf("Searching a patient...\n");
	}else if(user_input == 4)
	{
		printf("Exiting...\n");
	}else
	{
		printf("Invalid input!\n");
	}

// Using switch instead of else if:

	printf("Choose a menu option from 1-4:\n1. Add a patient\n2. View a patient\n3. Search a patient\n4. Exit\n");
	int user_input2;
	scanf("%d", &user_input2);

	switch(user_input2)
	{
		case 1:
			printf("Adding a patient...\n");
			break;
		case 2:
			printf("Viewing a patient...\n");
			break;
		case 3:
			printf("Searching a patient...\n");
			break;
		case 4: 
			printf("Exiting...\n");
			break;
		default:
			printf("Invalid input!\n");
			break;
	}

	return 0;
}
