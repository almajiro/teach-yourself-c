#include <stdio.h>
double avg(double *values, int num);

int main(void)
{
	double values[] = {
		1.56422,
		9.2952,
		12.58224,
		58.18653
	};

	double average;

	average = avg(values, 4);

	printf("Average is %lf\n", average);
}

double avg(double *values, int num)
{
	int i;
	double sum = 0;;

	for(i=0;i<(double)num;i++){
		sum += *(values + i);
	}

	return sum / (double) num;
}
