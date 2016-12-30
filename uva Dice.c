#include<stdio.h>
int golap(long long number)
{
    long long sum=0, temp;
    for(; number!=0;)
    {
        temp=number%10;
        sum=sum+temp;
        number=number/10;
    }
    return sum;

}
int main()
{
    int t,i;
    long long a,b;
    while(scanf("%d",&t)==1)
    {
        for(i=1; i<=t; i++)
        {
            scanf("%lld %lld", &a,&b);
            if(golap(a)==golap(b))
                printf("Equal\n");
            else
                printf("Not Equal\n");
        }
    }
    return 0;
}
