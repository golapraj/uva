#include<stdio.h>
#include<math.h>
int main()
{
    long long int t, n, x, i, j;
    long double day;
    while(scanf("%lld",&t)==1)
    {
        for(i=1; i<=t; i++)
        {
            scanf("%lld",&n);
            printf("Case %lld:",i);
            for(x=(long long int)sqrt(n); x>=1; x--)
            {
                j=n-(x*x);
                if(j%x==0 && j>0)
                {
                    printf(" %lld",j);
                }
            }
            printf("\n");
        }
    }
    return 0;
}

