#include<stdio.h>
int main()
{
    int a,b,c,t,n=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&a,&b,&c);
        if((a>b&&a<c)||(a<b&&a>c))
            printf("Case %d: %d\n",++n,a);
        else if((b>a&&b<c)||(b<a&&b>c))
            printf("Case %d: %d\n",++n,b);
        else if((c>b&&c<a)||(c<b&&c>a))
            printf("Case %d: %d\n",++n,c);
    }
    return 0;
}
