#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    freopen("in.txt","r",stdin);
    int t,i,a[100000],z;
    while(scanf("%d",&t)==1)
    {
        memset(a,0,sizeof(a));
        a[2]=1;
        a[3]=1;
        a[5]=1;
        a[7]=1;
        a[13]=1;
        a[17]=1;
        a[31]=1;
        a[61]=1;
        a[89]=1;
        for(i=0; i<t; i++)
        {
            if(i==t-1)
                scanf("%d",&z);
            else
                scanf("%d,",&z);
            if(a[z])
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}
