#include <stdio.h>
/*Write a program to copy its input to its output, replacing
 * each tab by \t, each backspace by \b, and 
 * each backslash by \\
 */
int main()
{
	long c;
	while( (c = getchar()) != EOF)
	{
		if(c == '\t')
		{
			printf("\\t"); 
		}
		if(c == '\b')
		{
			printf("\\b");
		}
		if(c == '\\')
		{
			printf("\\\\");
		}
		if((c != '\t') && (c != '\b') && (c != '\\'))
		{
			putchar(c); 
		}

	}
	return 0;
}
