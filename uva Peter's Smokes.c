#include <stdio.h>
int golap(long g,long c)
{
    int a, b=0;
    while(g>=c)
    {
        a=g/c;
        b=b+a;
        g=a+(g%c);
    }
    return b;
}
int main()
{
    long long p,q,g;
    while(scanf("%lld %lld",&p,&q)!=EOF)
    {
        g=golap(p,q);
        printf("%lld\n",g+p);
    }
return 0;
}

