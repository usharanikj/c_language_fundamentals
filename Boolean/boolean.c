#include <stdio.h>
#include <stdbool.h>

int main()
{

// When <stdbool.h> is not included:

	_Bool isUshaFat = 300; // camel case
	printf("Is Usha fat? %i.\n1 is yes, 0 is no.\n", isUshaFat);
	// The output will show '1'. Any non-zero value is 'true' (1), and 0 is 'false'. 


	_Bool is_usha_tall = 0;
	printf("Is Usha tall? %i. \n1 is yes, 0 is no.\n", is_usha_tall);
	// // The output will show '0'.
	
// When <stdbool.h> is included, can use true/ false keywords and bool instead of _Bool:

	bool is_usha_fun = false;
	printf("Is usha fun? %i.\n1 is yes, 0 is no.\n", is_usha_fun);

	bool is_usha_sweet = true;
	printf("Is usha sweet? %i.\n1 is yes, 0 is no.\n", is_usha_sweet);

	// While using true/ false, the values stored are still 0 or 1:
	int x = is_usha_fun + 10;
	printf("%i\n", x); // Output: 10

	int y = is_usha_sweet + 10;
	printf("%i\n", y); // Output: 11

	return 0;
}
