#define INT 0
#define FLOAT 1
#define PWR_TYPE FLOAT

#include <stdio.h>

int main(void)
{
	int i;
#if PWR_TYPE==FLOAT
	float j, res;	
#elif PWR_TYPE==INT
	int j, res;
#endif

	printf("数値を入力してください: ");

#if PWR_TYPE==FLOAT
	scanf("%f", &j);
#elif PWR_TYPE==INT
	scanf("%d", &j);
#endif

	res = 1;

	printf("何乗しますか？: ");
	scanf("%d", &i);

	for( ; i>0; i--){
		res *= j;
	}

#if PWR_TYPE==FLOAT
	printf("%f\n", res);
#elif PWR_TYPE==INT
	printf("%d\n", res);
#endif

}
