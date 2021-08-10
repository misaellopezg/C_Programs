#include <stdio.h>
#include <ctype.h> 
/*Write an alternate version of squeeze(sq,s2) that 
 * deletes each character in s1 that matches any 
 * characte rint he string s2.
 */

#define MAXLIM 1000
void getstr(char[]);
void altsqueeze(char[],char[]);

int main(void)
{
	int i;
	char str1[MAXLIM], str2[MAXLIM];
	printf("Enter first string: ");
	getstr(str1); 
	printf("Enter characters to remove: ");
	getstr(str2);
	altsqueeze(str1,str2);
}

void  getstr(char s[])
{
	int i,c; 
	for(i = 0; i < (MAXLIM-1) && (c = getchar()) != EOF && c != '\n'; ++i)
	{
		s[i] = c;
	}
	if(c == '\n')
	{
		s[i] = '\0';
	}
}

void altsqueeze(char s[], char c[])
{
	int i,j,k;
	char  out[MAXLIM];
	for(k = 0; c[k] != '\0'; k++)
	{
		printf("Checking for %c \n",c[k]);
		for(i = j = 0; s[i] != '\0'; i++)
		{
			printf("i = %d; j = %d; s[i] = %c\n",i,j,s[i]);
			if(s[i] != c[k])
			{
				s[j++] = s[i]; 
				printf("Not found; current string: %s\n",s);
			
			}
			else
			{
				printf("Found; current string: %s\n",s);
			}
		}
		s[j] = '\0';
	}
	printf("Final result: %s\n",s); 	

}
