#include <stdio.h>

int main(void)
{
	double s1;
	int s2, num;
	char s3[80];

	printf("double int char: ");
	scanf("%lf%d%s%n", &s1, &s2, s3, &num);

	printf("%d", num);

}
