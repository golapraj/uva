#include<stdio.h>
long long fibo(long long k)
{
    long long fib[82],n,i;

    fib[1]=1;
    fib[2]=2;
    for(i=3; i<=10000; i++)
    {
        fib[i]=fib[i-2]+fib[i-1];
    }
    return fib[k+1]-1;
}
int main()
{
    long long k;
    while(scanf("%lld",&k)==1&&k!=-1)
    {
        printf("%lld %lld\n",fibo(k),fibo(k+1));
    }
    return 0;
}

