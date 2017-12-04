#include <stdio.h>
#include <math.h>

double hypot(double val1, double val2);

int main(void)
{
	printf("%lf\n", hypot(19.2, 12.9));	
}

double hypot(double val1, double val2)
{
	val1 = val1 * val1;
	val2 = val2 * val2;

	return sqrt(val1 + val2);
}
