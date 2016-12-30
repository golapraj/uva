#include<stdio.h>
#define max 9876543210
int g(long long int n)
{
    long long int t,tt[10]= {};
    while(n)
    {
        t=n%10;
        n=n/10;
        tt[t]++;
        if(tt[t]>1)
            return 0;
    }
    return 1;
}
int main()
{
    freopen("in.txt","r",stdin);
    long long int t,nn,i,ii;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&nn);
        for(i=1; nn*i<=max; i++)
        {
            if(g(i)&&g(i*nn))
                printf("%lld / %lld = %lld\n",nn*i,i,nn);
        }
        if(t)
            printf("\n");
    }
    return 0;
}
