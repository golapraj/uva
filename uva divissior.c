#include<stdio.h>
#include<math.h>
int main()
{
    long int a,b,c,d,e,t,m=0,m2;
    scanf("%ld",&t);
    while (t--)
    {
        scanf("%ld %ld",&a,&b);
        if (a>b)
        {
            c=a;
            a=b;
            b=c;
        }
        m=0;
        for (c=a; c<=b; c++)
        {
            e=0;
            for (d=1; d<=sqrt(c); d++)
            {
                if (c%d==0)
                {
                    e++;
                    if(c/d!=d)
                        e++;
                }
            }
            if (e>m)
            {
                m=e;
                m2=c;
            }
        }
        printf("Between %ld and %ld, %ld has a maximum of %lu divisors.\n",a,b,m2,m);
        m=0;
    }
    return 0;
}

