#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	double *p;
	FILE *fp;

	p = malloc(10 * sizeof(double));
	if(!p){
		puts("Allocation Error");
		exit(1);
	}

	for(i=0; i<10; i++)
		p[i] = (double)rand();

	if((fp = fopen("myfile", "wb")) == NULL){
		puts("cannot open file");
		exit(1);
	}

	if(fwrite(p, 10*sizeof(double), 1, fp) != 1){
		puts("write error");
		exit(1);
	}

	fclose(fp);

	free(p);

	/* some functions */

	p = malloc(10 * sizeof(double));
	if(!p){
		puts("Allocation Error");
		exit(1);
	}

	if((fp = fopen("myfile", "rb")) == NULL){
		puts("cannot open file");
		exit(1);
	}

	if(fread(p, 10*sizeof(double), 1, fp) != 1){
		puts("read error");
		exit(1);
	}

	fclose(fp);

	for(i=0; i<10; i++) printf("%1f ", p[i]);
	free(p);
	puts("");	
}
