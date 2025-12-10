#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int main()
{
	time_t current_time = time(NULL);
	printf("%ld\n", current_time);

	current_time = rand();
	printf("%i\n", rand());

	current_time = srand();
	printf("%i\n", srand());



	return 0;
}
