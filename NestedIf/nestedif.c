#include <stdio.h>

int main()
{
	printf("Choose a menu option from 1-4:\n1. Add a patient\n2. View a patient\n3. Search for a patient\n4. Exit\n");
	int user_input;
	scanf("%d", &user_input);	

	if(user_input == 1)
	{
		printf("Adding a patient...\n");
	}	
	else if(user_input == 2)
	{
		printf("Viewing a patient...\n");
	}
	else if(user_input == 3)
	{
		printf("Searching for a patient...");
	}
	else if(user_input == 4)
	{
		printf("You hit exit! Do you want to save your changes? To save and exit, press Y. To exit without saving, press N. ");
		char user_input2;
	
		getchar(); // To flush out the input stream when you are trying to read a character
		scanf("%c",&user_input2);
		
		if(user_input2 == 'Y' || user_input2 == 'y')
		{
			printf("Saving changes...\nThanks for visiting us!\n");
		}
		else if(user_input2 == 'N' || user_input2 == 'n')
		{
			printf("Exiting...\nThanks for visiting us!\n");
		}
		else
		{
			printf("Invalid input!\nChanges made were not saved!\nThanks for visiting us!\n");
		}
	}
	else	
	{
		printf("Invalid input!\n");
	}

	return 0;
}
