#include<stdio.h>
int a[1000002],b[1000002],sum[1000002],z,i,p,k;
int main()
{
    // freopen("in.txt","r",stdin);
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,temp=0,z=0;
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            scanf("%d %d",&a[i],&b[i]);
        }
        for(i=n-1; i>=0; i--)
        {
            p=(temp+(a[i]+b[i]));
            k=p%10;
            sum[z++]=k;

            temp=p/10;

        }
        for(i=z-1; i>=0; i--)
        {
            printf("%d",sum[i]);
        }
        printf("\n");
        if(t)
            printf("\n");
    }

    return 0;
}
