#include <stdio.h>

#define MAX 100
#define COUNTBY 3

int main(void)
{
	int i;
	for(i=0;i<MAX;i+=COUNTBY){
		printf("%d ", i);
	}
}
