#include <stdio.h> 
/*Write a program to remove trailing blanks 
 * and tabs from each line of input and 
 * delete entirely blank lines
 */
#define MAXLINE 1000
int gline(char v[], int w); 
int removeblanks( char x[],char y[] ,int z); 
int main()
{
	int len;
	char in[MAXLINE];
       	char out[MAXLINE];	
	while((len = gline(in,MAXLINE)) > 0)
	{
		if(len > 1)
		{
			removeblanks(in,out,len);
		}	
	}
	return 0;
}
int gline(char s[],int maxline)
{
	int i,c;
	for(i = 0; i < maxline -1 && (c = getchar()) != EOF && c != '\n'; ++i)
	{
		s[i] = c;
	}
	if(c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i; 
}
int removeblanks(char in[], char out[], int p)
{
	int i,flag,blnk;
	blnk = -1; 
	for( i = 0; i < p; i++)
	{
		if(in[i] != ' ' && in[i] != '\t' && in[i] != '\n')
		{
			blnk = -1;
		}
		else if(blnk == -1)
		{
			blnk = i;
			printf("%d\n",i);
		}
	}
	if(blnk == -1)
	{
		blnk = i; 
	}	
	printf("Original Last position: %d\n",i);
	for(i = 0; i < blnk; i++)
	{
		out[i] = in[i];
	}
	printf("New Last position: %d\n",i);
	out[i+1] = '\0';
	printf("New string: %s\n",out);

}
