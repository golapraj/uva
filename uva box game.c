#include<stdio.h>
int main()
{
    long long int n;
    while(scanf("%lld",&n)==1&&n)
    {
        long long int t=1;
        while(t<n)
        {
            t=2*t;
            t++;
        }
        if(t==n)
            printf("Bob\n");

        else
            printf("Alice\n");
    }
    return 0;
}
