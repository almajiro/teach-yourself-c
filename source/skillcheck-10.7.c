#include <stdio.h>

int main(void)
{
	union {
		short int val;
		char bytes[2];
	} my_data;

	my_data.val = 2560;

	printf("全ビット  : 0x%04X\n", my_data.val);
	printf("上位ビット: 0x%02X\n", my_data.bytes[1]);
	printf("下位ビット: 0x%02X\n", my_data.bytes[0]);
}
