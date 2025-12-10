// Single-Line if Statements in C:

#include <stdio.h>
#include <stdbool.h>

int main()
{
	// Eg. 1 (No braces, multiple lines): score1++ executes regardless of the if condition, because only the first statement after if is conditional.
	int score1 = 1;
	if (true)
    		printf("TRUE!\n");
    		score1++;
	printf("%d\n", score1);


	// Eg. 2 (Same behavior, single line): Same result as Example 1 — score2++ runs unconditionally.
	int score2 = 1;
	if (true) printf("TRUE!\n");
	score2++;
	printf("%d\n", score2);

	// Eg. 3 (Braces used correctly): Statements inside { } run only if the condition is true. 
	int score3 = 1;
	if (false) 
	{
    		printf("TRUE!\n");
    		score3++;
	}
	printf("%d\n", score3);

	return 0;
}	
/*

Key Takeaways:
A single-line if only guards one statement.
Indentation does not affect execution — only braces do.
Bugs occur when: A second statement is added without braces, making it run unconditionally.

Best Practices:
Always use braces { } — safest, least error-prone.
If you insist on a single-line if, keep it truly single-line.

Rule of Thumb: If your if doesn’t fit on one line, it needs braces.

*/
