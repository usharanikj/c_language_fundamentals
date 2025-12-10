#include <stdio.h>

int main()
{
	int pizzas_to_eat = 100;
	printf("Pizzas to eat: %i\n", pizzas_to_eat);

	// Assignment Operators:
	
	pizzas_to_eat += 100;
	printf("Pizzas to eat: %i\n", pizzas_to_eat); // Output: 200

	pizzas_to_eat -= 100;
	printf("Pizzas to eat: %i\n", pizzas_to_eat); // Output: 100

	pizzas_to_eat *= 2;
	printf("Pizzas to eat: %i\n", pizzas_to_eat); // Output: 200

	pizzas_to_eat /= 5;
	printf("Pizzas to eat: %i\n", pizzas_to_eat); // Output: 40

	pizzas_to_eat %= 3;
	printf("Pizzas to eat: %i\n", pizzas_to_eat); // Output: 1

	return 0;
}
