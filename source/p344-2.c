#include <stdio.h>
#include <stdlib.h>

int comp(int *i, int *j);

int main(void)
{
	int sort[100], i;
	int *p;

	for(i=0; i<100; i++)
		sort[i] = rand();

	qsort(sort, 100, sizeof(int), comp);

	for(i=0; i<100; i++)
		printf("%d\n", sort[i]);

	printf("数値を入力してください: ");
	scanf("%d", &i);

	p = bsearch(&i, sort, 100, sizeof(int), comp);

	if(p == NULL) puts("一致しませんでした。");
	else puts("一致しました。");

}

int comp(int *i, int *j)
{
	return *i - *j;
}
