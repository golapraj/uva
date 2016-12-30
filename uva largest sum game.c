#include<stdio.h>
int main()
{
    freopen("in.txt","r",stdin);
    int n,sum=0,max=0;
    char c;
    while(scanf("%d%c",&n,&c)!=EOF)
    {
        sum=sum+n;
        if(sum<0)
            sum=0;
        if(sum>max)
            max=sum;
        if(c=='\n')
        {
            printf("%d\n",max);
            sum=max=0;
        }
    }
    return 0;
}
