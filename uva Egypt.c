#include<stdio.h>

int main()
{
    long long a,b,c;
    while(scanf("%lld %lld %lld",&a,&b,&c)!=EOF && (a!=0&&b!=0&&c!=0))
    {
        if(a>b && a>c)
        {
            if(a*a==b*b+c*c)
                printf("right\n");
            else
                printf("wrong\n");
        }

        if(b>a &&b>c)
        {
            if(b*b==a*a+c*c)
                printf("right\n");
            else
                printf("wrong\n");
        }

        if(c>b &&c>a)
        {
            if(c*c==b*b+a*a)
                printf("right\n");
            else
                printf("wrong\n");
        }
    }
    return 0;
}
