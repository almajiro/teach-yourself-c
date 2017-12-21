#include <stdio.h>

struct {
	signed int a: 3;
	signed int b: 3;
	signed int c: 2;
} my_data;

int main(void)
{
	my_data.a = 3;
	my_data.b = -2;
	my_data.c = 1;

	printf("%d\n", my_data.a);
	printf("%d\n", my_data.b);
	printf("%d\n", my_data.c);
}
