#include <stdio.h>
/* print Fahrenheit-Celcius table for
    far = 0, 20, ....,300 */
int main()
{
	float fahr, cel;
	float  lower, upper, step; 
	lower = 0.0;
	upper = 100.0; 
	step = 5.5; 
	fahr = lower;
	printf("Celcius\tFahrenheit\n");
	while(cel <= upper)
	{
		fahr  = (9.0 / 5.0) * cel + 32.0;
		printf("%3.1f\t%3.1f\n",cel,fahr);
		cel  = cel + step;
	}
}
