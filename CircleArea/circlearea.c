#include <stdio.h>

int main()
{
	float radius;
	printf("Please enter a value for the radius of a circle: ");  //user prompt
	scanf("%f", &radius);
	
	float area;
	area = 3.14 * (radius * radius);
	printf("The radius of the circle is equal to %f, and the area is equal to %f.\n", radius, area);
	
	return 0;
}
