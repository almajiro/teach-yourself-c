#include "stdio.h"

main()
{
    int sqr;

    sqr = get_sqr();
    printf("2乗は: %d", sqr);
}

get_sqr()
{
    int num;

    printf("数値を入力してください : ");
    scanf("%d", &num);
    return num * num;
}