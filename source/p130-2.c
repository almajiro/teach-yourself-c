#include "stdio.h"

int main(void)
{
	int array[3][3][3];
	int i, j, k, x = 1;

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(k=0;k<3;k++){
				array[i][j][k] = x;
				x++;
			}
		}
	}

	x = 0;

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(k=0;k<3;k++){
				x += array[i][j][k];
			}
		}
	}

	printf("x = %d\n", x);
	printf("finished.\n");
}
