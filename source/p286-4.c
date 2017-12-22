#include <stdio.h>
#include <string.h>

struct my_struct {
	char str[80];
};

void test(struct my_struct my_data);

int main(void)
{
	struct my_struct my_data;
	strcpy(my_data.str, "steins;gate 0");

	test(my_data);
	puts(my_data.str);
}

void test(struct my_struct my_data)
{
	strcpy(my_data.str, "the irregular at magic high school");
	puts(my_data.str);
}
