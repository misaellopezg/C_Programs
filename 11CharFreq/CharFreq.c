#include <stdio.h> 
/*Write a program to print a histogram
 * of the frequencies of different characters in its input
 */
int main()
{
	int c,i,j; 
	int freq[128];
	for( i = 0; i < 128; ++i)
	{
		freq[i] = 0;
	}
	while( (c = getchar()) != EOF)
	{
		++freq[c];
	}
	printf("Histogram!\n");
	for( i = 0; i < 128; ++i)
	{
		putchar(i);
		printf(" :"); 
		for( j = 0; j < freq[i]; j++ )
		{
			printf("*");
		}
		printf("\n"); 
	}
	return 0; 

}
