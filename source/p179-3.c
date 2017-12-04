#include <stdio.h>

void f1(int a);
void f2(int b);

void main(void)
{
	f1(30);
}

void f1(int a)
{
	if(a) f2(a-1);
	printf("%d ", a);
	if(a == 30) printf(" FIRST CALL ");
}

void f2(int b)
{
	printf(".");
	if(b) f1(b-1);
}

