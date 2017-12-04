#include "stdio.h"

main()
{
    int o, c;
    scanf("%d", &o);

    c = o_to_c(o);
    printf("%d cups\n", c);
}

o_to_c(int o)
{
    return o / 8;
}