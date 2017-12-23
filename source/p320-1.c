#include <stdio.h>

void show_binary(unsigned int u);

int main(void)
{
	unsigned char val = 0xA1;
	unsigned char temp1;

	show_binary(val);

	temp1 = val;
	
	temp1 <<= 4;
	val >>= 4;

	val |= temp1;

	show_binary(val);
}

void show_binary(unsigned int u)
{
	unsigned int l;

	for(l=128; l; l>>=1){
		if(u & l) printf("1 ");
		else printf("0 ");
	}

	puts("");
}
