#include<stdio.h>
int max(int a,int b)
{
    return a>b?a:b;
}
int min(int a,int b)
{
    return a<b?a:b;
}
int main()
{
    long int tc,l,n,m,mx,mn;
    scanf("%ld",&tc);
    while(tc--)
    {
        mx=mn=0;
        scanf("%ld %ld",&l,&n);
        while(n--)
        {
            scanf("%ld",&m);
            mx=max(mx,min(l-m,m));
            mn=max(mn,max(l-m,m));
        }
        printf("%ld %ld\n",mx,mn);
    }
    return 0;
}
