#include<stdio.h>
#include<math.h>
long int sum[1000000];
int main()
{
    long int n,i,k,num[2000],nn,close,d,j,t=0,mm,min;
    while(scanf("%ld",&n)==1&&n)
    {
        t+=1;
        for(i=0; i<n; i++)
            scanf("%d",&num[i]);
        k=0;
        for(i=0; i<n-1; i++)
        {
            for(j=i+1; j<n; j++)
            {
                sum[k++]=num[i]+num[j];
            }
        }
        scanf("%ld",&nn);
        printf("Case %ld:\n",t);
        for(i=1; i<=nn; i++)
        {
            min=2147483647;
            scanf("%ld",&mm);
            for(j=0; j<k; j++)
            {
                d=abs(mm-sum[j]);
                if(min>d)
                {
                    min=d;
                    close=sum[j];
                }
            }
            printf("Closest sum to %ld is %ld.\n",mm,close);
        }
    }
    return 0;
}
