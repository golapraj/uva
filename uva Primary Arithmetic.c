#include<stdio.h>
int main()
{
    long long a,b,c,d,e;
    while(scanf("%lld %lld",&a,&b)==2)
    {
        if(a==0&&b==0)
            break;
        c=0;
        e=0;
        d=0;
        while(a||b)
        {
            d=(a%10+b%10+d)/10;
            if(d)
            {
                c++;
            }

            a/=10;
            b/=10;
        }
        if(c==0)
            printf("No carry operation.\n");
        else if(c==1)
            printf("1 carry operation.\n");
        else
            printf("%lld carry operations.\n",c);
    }
    return 0;
}
