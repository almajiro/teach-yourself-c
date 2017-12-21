#include <stdio.h>
#include <stdlib.h>

void write(FILE *fp, double val);
double read(FILE *fp);

union my_data {
	double val;
	unsigned char bytes[8];
};

char *file = "UNIONTEST";

int main(void)
{
	FILE *fp;
	double val;

	if((fp = fopen(file, "wb+")) == NULL){
		puts("ファイルがオープンできませんでした。");
		exit(1);
	}

	write(fp, 45.561);

	val = read(fp);

	printf("%f\n", val);
}

void write(FILE *fp, double val)
{
	int i;
	union my_data thisVal;

	thisVal.val = val;

	rewind(fp); // ファイルの先頭位置へ

	for(i=0; i<8; i++)
		fputc(thisVal.bytes[i], fp);

}

double read(FILE *fp)
{
	int i;
	union my_data thisVal;

	rewind(fp); // ファイルの先頭位置へ

	for(i=0; i<8; i++)
		thisVal.bytes[i] = fgetc(fp);

	return thisVal.val;
}

