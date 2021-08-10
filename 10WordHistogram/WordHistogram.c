#include <stdio.h> 
/*write a program to print a histogram of the lengths
 * of words in its input. print in vertical orientation.
 */
int main()
{
	int c,space,len,i;
	int history[10]; 
	space = len = 0;
       	for(i = 0; i < 10; ++i)
	{
		history[i] = 0; 
	}
	while( (space < 10) && ((c=getchar()) != EOF ) )
	{
		if( c == '\t' || c == ' ' || c == '\n')
		{
			++space;
			printf("Space: %d",space);	
		}
		else
		{
			++history[space];
		}
	}
	printf("Histogram\n"); 
	for(i = 0; i < 10; ++i)
	{
		printf("%d: ",i); 
		printf("%d\n",history[i]);
	}
	return 0;
}
