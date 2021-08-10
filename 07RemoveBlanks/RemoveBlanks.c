#include <stdio.h>
/*Write a program to copy its input to its output, 
 * replacing each string of one or more blanks by a snigle
 * blankg
 */
int main()
{
	long c,blnk;
	blnk = 0;
	while( (c = getchar()) != EOF)
	{
		if(c == ' ')
		{
			if(blnk == 0)
			{
				putchar(c);
				blnk = 1;
			}
		}
		if(c != ' ')
		{
			putchar(c); 
			blnk = 0; 
		}

	}	
	return 0;
}
