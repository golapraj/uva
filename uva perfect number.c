#include<stdio.h>
int main()
{
    char c;
    int n,t,i,sum,j;
    while(scanf("%d",&t)==1)
    {
        for(j=1; j<=t; j++)
        {
            if(j==t)
                scanf("%d",&n);
            else
                scanf("%d %c",&n,&c);
            sum=0;
            for(i=1; i<n; i++)
            {
                if(n%i==0)
                    sum=sum+i;
            }
            if(sum==n)
                printf("yes\n");
            else
                printf("no\n");
        }
        return 0;
    }
}
