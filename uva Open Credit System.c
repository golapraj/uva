#include<stdio.h>
int main()
{
    int t,n,s[200000],i,max,md;
    scanf("%d",&t);
    while(t--)
    {
        max=md=-200000;
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            scanf("%d",&s[i]);
        }
        for(i=0; i<n-1; i++)
        {
            if(s[i]>max)
                max=s[i];
            if(max-s[i+1]>md)
                md=max-s[i+1];
        }
        printf("%d\n",md);
    }
    return 0;
}
