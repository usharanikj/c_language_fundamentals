#include <stdio.h>
#include <string.h>

int main()
{
	printf("What is your favourite food? ");
	char fav_food[50]; // Index 49 (50th character) is reserved for the null character, so we only want to read 49 characters.		
	scanf("%49s", fav_food);
	printf("%s\n", fav_food);

	int character_count = strlen(fav_food);
	printf("The character count is: %d\n", character_count );

	// Function to calculate character count:
	int char_count = 0;
	while(fav_food[char_count] != '\0')
	{
		char_count++;
	}
	printf("The character count is: %d\n", char_count);

	return 0;
}
