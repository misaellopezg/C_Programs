#include <stdio.h>
#include <ctype.h> 
/*Write the function htois(s),
 * which converts a string of hexadecimal digits 
 * (including an optional 0x or 0X) into its equivalent
 * integer value. The allowable igits are 0 through 9, 
 * a through f, and A through F
 */

#define MAXLIM 8
int gline(char[]);
int checkprefix(char[]);
int checkhexnums(char[],int,int);
int hextointval(char c);
int htoi(char[],int,int);

int main(void)
{
	int pointer, checkpointer;
	char in[MAXLIM];
	pointer = gline(in);
	checkpointer = 0;
	printf("Input string: %s\n",in); 
	if(checkprefix(in))
	{
		printf("Prefix found!\n"); 
		checkpointer = 2;
	}	
	else
	{
		printf("Prefix not found.\n");
		checkpointer = 0;
	}
	if(checkhexnums(in,checkpointer,pointer))
	{
		printf("Valid Hex characters found!\n");
		printf("Decimal Val: %d\n",htoi(in,checkpointer,pointer-1));
	}
	else
	{
		printf("Invalid characters found, boo...\n");
	}

	return 0;
}

int gline(char s[])
{
	int i,c; 
	for(i = 0; i < (MAXLIM-1) && (c = getchar()) != EOF && c != '\n'; ++i)
	{
		s[i] = c;
	}
	if(c == '\n')
	{
		s[i] = c;
	}
	s[i+1] = '\0';
	return i;
}

int checkprefix(char s[])
{
	if( s[0] == '0' && (s[1] == 'x' || s[1] == 'X'))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int checkhexnums(char s[],int startpos, int lastpos)
{
	int i,flag;
	flag = 1;
	for(i = startpos; i < lastpos; ++i)
	{
		if(!isxdigit(s[i]) && s[i] != '\n')
		{
			flag = 0;
		}
	}
	return flag; 

}

int  htoi(char s[], int startpos, int lastpos)
{
	int i,j,num,dif,baseval;
	num = 0; 
	for(i = lastpos;i >= startpos; i--)
	{
		dif = lastpos - i;
		baseval = 1;	
		while(dif != 0)
		{
			baseval = baseval*16;
			--dif; 
		}
		num = num + (hextointval(s[i])*baseval);
	}
	return num; 
}

int hextointval(char c)
{
	int num = 0;
	if(c >= '0' && c <= '9')
	{
			num = c  - '0';
	}
	else if(c >= 'a' && c <= 'f')
	{
		num = 10 + (c - 'a');
	}
	else
	{
		num = 10 + (c - 'A'); 
	}
	return num; 
}
