/* 
What is a for loop inside of another for loop?
It's when you want to do a loop for every iteration of another loop.

Output the following pattern:
0
1 0
2 1 0
3 2 1 0
4 3 2 1 0
5 4 3 2 1 0
6 5 4 3 2 1 0
7 6 5 4 3 2 1 0
8 7 6 5 4 3 2 1 0
9 8 7 6 5 4 3 2 1 0
10 9 8 7 6 5 4 3 2 1 0
*/


#include <stdio.h>

int main()
{

// My approach:

	for(int i = 0; i <= 10; i++)
	{
		printf("%d ", i);
		for(int k = i; k > 0;)
		{	k--;
			printf("%d ", k);
		}
		printf("\n");
	}

// Caleb's approach:

	for(int i = 0; i <= 10; i++)
	{	
		for(int k = i; k >= 0; k--)
		{
			printf("%d ", k);
		}
		printf("\n");
	}
	return 0;
} 
		
