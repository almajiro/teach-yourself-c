#include <stdio.h>

float avg();

int main(void)
{
	printf("average: %lf\n", avg());
}

float avg()
{
	double num, sum;
	int i;

	for(i=0; i<10; i++){
		printf("%d個目の数値を入力 ==> ", i+1);
		scanf("%lf", &num);

		sum += num;
	}

	return sum / 10.0;
}
