#include <stdio.h> 
/*Write a function setbits(x,p,n,y) that returns
 * x with the n bits that begin at the position p set to the 
 * rightmost n bits of y, leaving the other bits unchanged. 
 */
void setbits(int,int,int,int); 

int main(void)
{
	int x,p,n,y; 
	x = 118; //Number whose bits will be set;
	p = 5; //starting position
	n = 3; // what right most bits to look at from y
	y = 78; // number to grab right most bits from;
	setbits(x,p,n,y); 
	return 0; 
}

void setbits(int x, int p, int n, int y) 
{
	int mask1,mask2; 
	mask1 = ~(~0<<n) & y;       
	printf("%d\n",mask1);	
	mask2 = (x >> (p+1-n)) & ~(~0 << n);
	printf("%d\n",mask2);	
	printf("%d\n", (mask1 | mask2)); 
}
