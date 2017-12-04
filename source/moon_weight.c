#include "stdio.h"

main()
{
    float weight;
    
    printf("体重: ");
    scanf("%f", &weight);

    printf("月では%fkgになります。", (weight * 0.17 ) );
}