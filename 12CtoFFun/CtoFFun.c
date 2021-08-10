#include <stdio.h>
/*Create cel to farh table using a function
 */
float celtofahr(float); 
	
int main()
{
	float i;
	for (i = 0; i < 100.0; i = i + 0.5)
	{
		printf("Cel: %f, Fahr: %f\n", i,celtofahr(i));	
	}
	return 0; 
}
float celtofahr(float cel)
{
	float fahr;
	fahr = (9.0/5.0)*cel + 32;	
	return fahr; 
}
