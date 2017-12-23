#include <stdio.h>

void rotate(short int *bytes);

int main(void)
{
	short int bytes = 0xF0;

	rotate(&bytes);
	printf("%d\n", bytes);
}

void rotate(short int *bytes)
{
	union {
		short int bytes;
		char ch[2];
	} _bytes;

	_bytes.bytes = 0;
	_bytes.ch[0] = *bytes;

	_bytes.bytes = _bytes.bytes << 1;

	if(_bytes.ch[1]) _bytes.ch[0] = _bytes.ch[0] | 1;

	*bytes = _bytes.bytes;
}
