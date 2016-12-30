#include<stdio.h>
long long golap(long long s,long long d)
{
    long long sum=0,i;
    for(i=s;; i++)
    {
        sum=sum+i;
        if(sum>=d)
        {
            break;
        }
    }
    return i;
}
int main()
{
    long long s,d;
    while(scanf("%lld %lld",&s,&d)==2)
    {
        printf("%d\n",golap(s,d));
    }
    return 0;
}

