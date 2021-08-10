#include <stdio.h> 

int invert(int,int,int);

int main(void)
{
	int x,p,n;
	x = 74; 
	p = 5; 
	n = 3;
	printf("%d\n",invert(x,p,n));
	return 0; 
}

int invert(int x, int p, int n)
{
	return (x ^ (~(~0<<n) << (p+1-n)));

}
