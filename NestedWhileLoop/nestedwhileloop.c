/* Create an application to output the following:
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
	int i = 0;

	while(i < 11) 
	{
		printf("%d ", i);
		int k = i; 
		while(k > 0)
		{
			k--;
			printf("%d ", k);
		}
		printf("\n");
		i++;
	}
	
	return 0;
}
