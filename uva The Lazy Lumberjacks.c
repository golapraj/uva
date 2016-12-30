#include <stdio.h>
int main()
{
    long long t,a,b,c,i;
    while(scanf("%lld", &t)!=EOF)
    {
        for(i=1; i<=t; i++)
        {
            scanf("%lld %lld %lld",&a,&b,&c);
            if(((a+b)<=c)||((b+c)<=a)||((a+c)<=b))
            {
                printf("Wrong!!\n");
            }
            else
                printf("OK\n");
        }
    }
    return 0;
}
