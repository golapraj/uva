#include<stdio.h>
#define n 1000000
long long fib[100000000];
int f()
{
    long long int a,b,i;
    for(i=1; i<n; i++)
    {
        z=a+b;
        if(i==1)
            printf("1 %lld ",z);

        a=b;
        b=z;
    }
}
int main()
{

}
