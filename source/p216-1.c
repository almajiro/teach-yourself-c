#include <stdio.h>

int main(void)
{
	char name[9][80];
	double batting_avg[9];
	double avg = 0, max = 0, min = 100;
	int i, max_index, min_index;

	for(i=0;i<9;i++){
		printf("Please enter the name of batter [%d]: ", i+1);
		scanf("%s", name[i]);
		printf("Please enter the batting average [%d]: ", i+1);
		scanf("%lf", &batting_avg[i]);

		avg += batting_avg[i];
	}

	avg = avg / 9.0;

	for(i=0;i<9;i++){
		if(batting_avg[i] > max){
			max = batting_avg[i];
			max_index = i;
		}
		if(batting_avg[i] < min){
			min = batting_avg[i];
			min_index = i;
		}
	}

	puts("Max");
	printf("  Name: %s\n", name[max_index]);
	printf("  Average: %lf\n", batting_avg[max_index]);

	puts("Min");
	printf("  Name: %s\n", name[min_index]);
	printf("  Average: %lf\n", batting_avg[min_index]);

	puts("----------------------------------\n");
	printf("Batting average in team: %lf\n", avg);
}
