#include <stdio.h>

int main()
{
    int t, nn, sh, sm, hh, mm, d, i,tym, tym2, min_time, spend, k=1;
    scanf("%d",&t);

    while (t--)
    {
        min_time = 100000;
        scanf("%d %d:%d",&nn,&sh,&sm);

        tym = sh*60 + sm;

        for (i=0 ; i<nn ; i++)
        {
            scanf("%d:%d %d",&hh,&mm,&d);

            tym2 = hh*60 + mm;

            if (tym2<tym)
                spend = 1440 -tym + tym2 + d;
            else
                spend = tym2 -tym + d;
            if (min_time>spend)
                min_time = spend;
        }

        printf("Case %d: %d\n",k++,min_time);
    }

    return 0;
}
