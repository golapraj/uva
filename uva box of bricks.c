#include<stdio.h>
int main()
{
    int a[101],m=0,n,sum=0,avg=0,g=0,i,j;
    while(scanf("%d",&n)==1&&n!=0)
    {
        sum=0;
        avg=0;
        m=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        avg=sum/n;
        for(j=0; j<n; j++)
        {
            if(avg<a[j])
                m+=a[j]-avg;
        }
        printf("Set #%d\n",++g);
        printf("The minimum number of moves is %d.\n\n",m);
    }
    return 0;
}
