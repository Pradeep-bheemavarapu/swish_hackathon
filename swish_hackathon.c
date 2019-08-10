#include <stdio.h>
void main()
{
    int k,amt=0,ary[2];
    for(k=0;k<2;k++)
    {
        scanf("%d",&ary[k]);
    }
    while(ary[0] != 0)
    {
        amt += ary[0];
        ary[0] = ((ary[1] * ary[0]) / 100);
    }
    printf("%d",amt-1);
}
