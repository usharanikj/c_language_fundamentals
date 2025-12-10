#include <stdio.h>

int main()
{
	int const column_num = 3;
	int const row_num = 2;
	int grades[row_num][column_num] = 
	{
		{12, 23, 45},
		{64, 78, 89}
	};

/*	for(int i = 0; i < row_num; i++)
	{
		for(int j= 0; j < column_num; j++)
		{
			printf("%d ",grades[i][j]);
		}
		printf("\n");
	}
*/
	return 0;
}
