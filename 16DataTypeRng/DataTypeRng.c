#include <stdio.h> 
#include <limits.h> 
#include <float.h>
/*Write a program to determine the ranges of char, short, 
 * int and long variables, both signed and usniged. 
 * Harder if you compute them: determine the ranges
 * of the various floating-point types
 */
int main()
{
	printf("Char,short,int, and long min/max: \n"); 
	printf("Unsigned Char min: %d\n",CHAR_MIN);
	printf("Unsigned Char max: %d\n",UCHAR_MAX); 
	printf("Signed Char min: %d\n",SCHAR_MIN);
	printf("Signed Char max: %d\n", SCHAR_MAX);
	printf("Unsigned short min: %d\n", 0);
	printf("Unsigned short max: %d\n",USHRT_MAX);
	printf("Signed short min: %d\n",SHRT_MIN);
	printf("Signed short max: %d\n",SHRT_MAX);
	printf("Unsigned int  min: %d\n",0);
	printf("Unsigned int  max: %lu\n",UINT_MAX);
	printf("Signed int  min: %d\n",INT_MIN);
	printf("Signed int  max: %d\n",INT_MAX);
	printf("Unsigned long  min: %d\n",0);
	printf("Unsigned long  max: %lu\n",ULONG_MAX);
	printf("Signed long  min: %ld\n",LONG_MIN);
	printf("Signed long  max: %ld\n",LONG_MAX);
}
