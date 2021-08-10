#include <stdio.h> 
/*write a function reverse(s) that reverses
 * the character string s. Use it to write a program that reverses its input a line at a time. 
 */
#define MAXLINE 1000
int gline(char l[],int o);
void reverse(char m[],char n[],int p );
int main()
{
	int len;
	char in[MAXLINE],out[MAXLINE];
	while( (len = gline(in,MAXLINE)) > 0)
	{
		if(len > 1)
		{
			reverse(in,out,len);
		}
		else
		{
			printf("No characters were entered.\n");
		}
	}
	printf("End of program!\n");

}

int gline(char s[], int limit)
{
	int c,i; 
	for(i = 0; i < limit-1 && (c=getchar()) != EOF && c!='\n';++i)
	{
		s[i] = c;
	}
	if(c == '\n')
	{
		s[i] = c;
		++i;
	}
	return i; 
}
void reverse(char in[], char out[], int p)
{
	int i;
	for(i = p -1; i >=0; --i)
	{
		out[(p-1)-i] = in[i]; 	
	}
	out[p] = '\n';
	out[p+1] = '\0';
	printf("Reversed: %s",out);
}
