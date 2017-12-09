#include <stdio.h>

int main(void)
{
	int i, cnt = 0;
	;
	for(i=2; i<1001; i++){
		if(i % 2){
			if(cnt == 4){
				puts("");
				cnt = 0;
			}
			printf("%4d ", i);
			cnt++;
		}
	}
}
