#include <stdio.h>

int main()
{
	int student_grades[4][5] = {
		{20, 23, 24, 21, 22},
		{22, 22, 22, 22, 23},
		{17, 23, 19, 18, 15},
		{13, 14, 22, 25, 14}
	};	

	printf("%d\n", student_grades[3][4]);
	student_grades[3][4] = 20;
	printf("%d\n", student_grades[3][4]);
	
	for (int i = 0; i < 4; i++)
	{
		for (int k = 0; k < 5; k++)
		{
			printf("%d ", student_grades[i][k]);
		}
		printf("\n");
	}

	return 0;
}

/* Doubts:
I tried declaring and initializing an array the following way, and it threw an error. I’m not sure why, and I couldn’t understand the explanation I got on GPT. The following notes are from GPT and are for reference, so I can look up what the issue was when I have more time and resources.

The Core Requirement for 2D Arrays:
In C (especially older standards), the size of an array dimension, such as the column size in a 2D array (e.g., int student_grades[rows][columns]), must be a compile-time constant. The compiler must know this value when generating the machine code to correctly calculate the memory location for any element. 

This is what I originally attempted:

	int const columns = 5;
	int student_grades[][columns] = {
		{20, 23, 24, 21, 22},
		{22, 22, 22, 22, 23},
		{17, 23, 19, 18, 15},
		{13, 14, 22, 25, 14}
	};

Why const Triggers a Warning:
Technically a Variable: A variable declared with const (e.g., int const columns = 5;) is still technically a variable in C, which is usually determined at run-time. It's not the same as a pure compile-time constant.

*/

