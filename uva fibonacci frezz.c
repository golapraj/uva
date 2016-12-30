#include <stdio.h>
int main()
{
    long long n,g;
    while((scanf("%lld",&n))!=EOF)
    {


        g=n;
        long long i;
        long long fib[n];

        fib[0]=1;
        fib[1]=1;

        for(i=2; i<=n; i++)
        {
            fib[i]=fib[i-1]+fib[i-2];
        }

        printf("The Fibonacci number for %lld is %lld\n",n, fib[n-1]);
    }
    return 0;
}
