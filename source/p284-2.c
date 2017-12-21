#include <stdio.h>

int main(void)
{
	union {
		long val;
		int _val;
	} my_data;

	my_data.val = 0L;
	my_data._val = 346;

	printf("%ld\n", my_data.val);

}
