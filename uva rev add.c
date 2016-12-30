#include <stdio.h>
int main()
{
    int test,i;
    long long int n,c,sum,r,d;

    while (scanf("%d",&test)!=EOF)
    {
        for(i=1; i<=test; i++)
        {
            scanf("%lld",&n);
            d=n;
            c=0;
            while (d!=0)
            {
                sum=0;
                while (d!=0)
                {
                    r=d%10;
                    sum=sum*10+r;
                    d=d/10;
                }
                if (n==sum)
                    break;
                else
                {
                    d=sum+n;
                    n=sum+n;
                    c++;
                }
            }
            printf("%lld %lld\n",c,n);
        }
    }
    return 0;
}
