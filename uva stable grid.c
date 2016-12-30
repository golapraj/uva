#include<stdio.h>
int main()
{
    int n, i, j, t, tst, kase=1;
    scanf("%d",&tst);
    while ( tst-- )
    {
        scanf("%d",&n);
        int count[200]= {0};
        int v = 1;
        for (i=1 ; i<=n ; i++)
        {
            for (j=1 ; j<=n ; j++)
            {
                scanf("%d",&t);
                count[t]++;
                if (count[t]>n)
                {
                    v=0;
                }
            }
        }
        if (v)
            printf("Case %d: yes\n",kase++);
        else
            printf("Case %d: no\n",kase++);

    }
    return 0;
}
