#include<stdio.h>
int main()
{
    long long int n,i;
    while(scanf("%lld",&n)==1)
    {
        long long int sum = 0;
        for(i=1;i<=n;i++)
        {
            sum+=i*i*i;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
