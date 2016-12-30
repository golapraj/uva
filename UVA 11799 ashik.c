#include<stdio.h>
int main()
{
    int a,b,i,p,c,d,n,ans;
    while(scanf("%d",&n)==1)
    {
        i=1;
        while(i<=n)
        {
            scanf("%d",&c);
            ans=0;
            for(p=0;p<c;p++)
                {
                    scanf("%d",&a);
                    if(a>=ans)
                    ans=a;
                }
                printf("Case %d: %ld\n",i,ans);
                i++;
        }
    }
        return 0;

}
