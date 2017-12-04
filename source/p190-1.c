#include <stdio.h>

double f_to_m(double);

int main(void)
{
	double feet;

	printf("feetを入力しなさい: ");
	scanf("%lf", &feet);
	printf("Meters : %lf", f_to_m(feet));
}

double f_to_m(f)
double f;
{
	return f / 3.28;
}
