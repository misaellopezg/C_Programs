#include <stdio.h>
/* print Fahrenheit-Celcius table for
    far = 0, 20, ....,300 */
int main()
{
	float fahr, cel;
	float  lower, upper, step; 
	lower = 0.0;
	upper = 300.0; 
	step = 5.0; 
	printf("Celcius\tFahrenheit\n");
	for(cel = upper; cel >= lower; cel = cel - step)
	{
		fahr  = (9.0 / 5.0) * cel + 32.0;
		printf("%3.1f\t%3.1f\n",cel,fahr);
	}
}
