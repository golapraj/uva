#include<stdio.h>
int main()
{
    int tc,n,sum,mid,a[600],i,j,tem;
    scanf("%d",&tc);
    while(tc--)
    {
        sum=0;
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for (i = 0; i < n; i++)
        {
            for (j = i+1; j < n; j++)
            {
                if (a [i] > a [j])
                {
                    tem = a [i];
                    a[i] = a [j];
                    a [j] = tem;
                }
            }
        }
        mid=n/2;
        for(i=0; i<n; i++)
        {
            sum=sum+abs(a[i]-a[mid]);
        }
        printf("%d\n",sum);
    }
return 0;
}
