#include<stdio.h>
int main()
{
    long int n;
    while(scanf("%ld",&n)==1)
    {
        if(n>=0 &&n <=210000000)
            printf("%ld\n",(n*n+n+2)/2);
        if(n<0)
            break;
    }
    return 0;
}
