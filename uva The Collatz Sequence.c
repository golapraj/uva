#include<stdio.h>
int golap(long n,long e)
{
    long c;
    c=1;
    while(n!=1)
    {
        if(n%2==0)
            n=n/2;
        else
            n=3*n+1;
        if(n>e)
            return c;
        c++;
    }
    return c;
}

int main()
{
    long s,e,t=1;
    while(scanf("%ld %ld",&s,&e)==2)
    {
        if(s<0&&e<0)
        break;
        printf("Case %ld: A = %ld, limit = %ld, number of terms = %ld\n",t++,s,e,golap(s,e));
    }

}


