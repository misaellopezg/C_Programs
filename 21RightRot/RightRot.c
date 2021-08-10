#include <stdio.h> 

int rightrot(int,int); 

int main(void)
{
	int x,n;
	x = 35;
	n = 3;
	printf("%d\n",rightrot(x,n)); 
	return 0;
}

int rightrot(int x, int n)
{
	return (x >> n) | ((~(~0 << n) & x) << (32-n));	
}
