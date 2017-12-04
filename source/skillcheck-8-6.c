#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("引数: %d\n", argc);
	printf("最後の引数: %s\n", argv[argc -1]);
}
