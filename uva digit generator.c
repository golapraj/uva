#include<stdio.h>
int a[100002];
int sum(int n)
{
    int sum=0,m,t;
    m=n;
    while(n)
    {
        t=n%10;
        sum=sum+t;
        n=n/10;
    }
    return sum+m;
}
int gen()
{
    int i,j;
    for(i=100000; i>=1; i--)
    {
        if(a[i]==0)
            a[sum(i)]=i;
    }
}
int main()
{
    gen();
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("%d\n",a[n]);
    }
    return 0;
}
