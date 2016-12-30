#include <stdio.h>

int golap(long long n)
{
    long long i,c;
    c=1;
    for(i=1; i<=n/2; i++)
    {
        if(n%i==0)
            c++;
    }
    return c;
}

int main()
{
    long long i,s,e,d,dd=0,t,z,n;
    while(scanf("%lld", &t)!= EOF)
    {
        for(z=1; z<=t;z++)
        {
            scanf("%lld %lld", &s, &e);
            for(i=s; i<=e; i++)
            {
                d=golap(i);
                if(d>dd)
                {
                     dd=d;
                     n=i;
                }

            }
            printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",s,e,n,d);
        }
    }
    return 0;
}
