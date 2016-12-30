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
    long ac,p,c,z,t,i;
    while(scanf("%ld", &t)==1)
    {
        for(i=0; i<t; i++)
        {
            scanf("%ld %ld %ld", &ac, &p, &c);
            z=golap(ac+p,c);
            printf("%ld\n", z);
        }
    }
    return 0;
}
