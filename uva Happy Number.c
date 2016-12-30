#include<stdio.h>
int happy(long long n)
{
    long long int s=0;
    if(n<=9)
        return n;
    while(n!=0)
    {

        s+=((n%10)*(n%10));
        n/=10;
    }
    happy(s);
}

int main()
{
    int t,no=0;
  scanf("%d",&t);
    while(t--)
    {
        long long int n;
       scanf("%lld",&n);
        if(n==7)
        {
            printf("Case #%d: %lld is a Happy number.\n",++no,n);
        }
        else if(happy(n)==1)
        {
            printf("Case #%d: %lld is a Happy number.\n",++no,n);
        }
        else
        {
             printf("Case #%d: %lld is an Unhappy number.\n",++no,n);
        }

    }
    return 0;
}

