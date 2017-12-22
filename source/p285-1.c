#include <stdio.h>

struct s_type {
	int i;
	char ch;
	double d;
} var1, var2;

void struct_swap(struct s_type *var1, struct s_type *var2);
void show_struct(struct s_type *var1, struct s_type *var2);

int main(void)
{
	var1.i = 200;
	var1.ch = 'a';
	var1.d = 24.5;

	var2.i = 120;
	var2.ch = 'b';
	var2.d = 41.1;

	show_struct(&var1, &var2);
	struct_swap(&var1, &var2);
	show_struct(&var1, &var2);
}

void struct_swap(struct s_type *var1, struct s_type *var2)
{
	struct s_type temp;

	temp = *var1;
	*var1 = *var2;
	*var2 = temp;
}

void show_struct(struct s_type *var1, struct s_type *var2)
{
	puts("---var1---");
	printf("i=%d\n", var1->i);
	printf("ch=%c\n", var1->ch);
	printf("d=%f\n", var1->d);

	puts("---var2---");
	printf("i=%d\n", var2->i);
	printf("ch=%c\n", var2->ch);
	printf("d=%f\n", var2->d);
}
