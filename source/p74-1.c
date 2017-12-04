#include "stdio.h"

int main()
{
	int i, j, flag;

	for(i=2;i<=1000;i++){
		flag = 1;
		for(j=2;j<=i/2;j++){
			if(!(i%j)) flag = 0;
		}
		if(flag) printf("%d ", i);
	}

	printf("\n");

	return 0;
}