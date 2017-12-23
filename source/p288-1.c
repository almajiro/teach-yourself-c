#include <stdio.h>

int main(void)
{
	struct {
		int i;
		int sqr;
		int cube;
	} my_data[10];

	int i;

	for(i=1; i<11; i++){
		my_data[i-1].i = i;
		my_data[i-1].sqr = i*i;
		my_data[i-1].cube = i*i*i;
	}

	for(i=0; i<10; i++){
		printf("%2d %3d %4d\n", my_data[i].i, my_data[i].sqr, my_data[i].cube);
	}
}
