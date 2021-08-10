#include <stdio.h> 
/*This program will count blanks, tabs, and new lines
*/
int main()
{
	long c; 
	int blnk, tb, nl;
	blnk = 0;
	tb = 0; 
	nl = 0; 
	while( (c = getchar()) != EOF)
	{
		if(c == '\t')
		{
			++tb;
		}
		///*
		if(c == 32)
		{
			++blnk;
		}
		//*/
		if(c == '\n')
		{
			++nl;
		}
		
	}
	printf("\n");
	printf("Tabs\tBlanks\tNewLine\n");
	printf("%d\t%d\t%d\n",tb,blnk,nl);
	return 0;
}
