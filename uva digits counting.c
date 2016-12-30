#include<stdio.h>
char golap[1000000];
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int j=0,b=0,n,i,a[11]={0};
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            b=i;
            while(b>0)
            {
                golap[j++]=(b%10)+48;
                b=b/10;
            }
        }
        for(i=0; i<j; i++)
            a[golap[i]-48]++;
        for(i=0; i<10; i++)
        {
            printf("%d",a[i]);
            if(i!=9)
                printf(" ");
            else
                printf("\n");
        }
    }
    return 0;
}
