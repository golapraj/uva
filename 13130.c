#include <stdio.h>
int main()
{
    int t,a[5],i,j;
    scanf("%d",&t);
    for( i=0; i<t; i++)
    {
        for( j=0; j<5; j++)
        {
            scanf("%d",&a[j]);
        }
        if(a[0]+1==a[1]&&a[1]+1==a[2]&&a[2]+1==a[3]&&a[3]+1==a[4])
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
    }
    return 0;
}