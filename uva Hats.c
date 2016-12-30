#include<stdio.h>
#include<math.h>
long long int fact(int n)
{
    if(n==0)
        return 1;
    else
        return fact(n-1)*n;
}
int main()
{
    int n,i;

    while(scanf("%d",&n)==1)
    {
        double ans=1.0;
        for(i=1; i<=n; i++)
        {
            if(i%2==0)
                ans=((ans*fact(i))+1.0)/fact(i);
            else
                ans=((ans*fact(i))-1.0)/fact(i);
        }
        ans*=fact(n);
        printf("%lf\n",ans);
    }
    return 0;
}


#include <stdio.h>
int main()
{
    long der[12] = {0,1, 2, 9, 44, 265, 1854, 14833, 133496, 1334961, 14684570, 176214841};
    long fac [12]= {1,2,6,24,120,720,5040,40320,362880,3628800,39916800,479001600} ;
    int t,i,n;
    scanf("%d", &t);
    for(i = 0 ; i < t ; i++)
    {
        scanf("%d", &n);
        printf("%d/%d\n", der[n-1],fac[n-1]);
    }
    return 0;
}
