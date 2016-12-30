#include<stdio.h>
int main()
{
    long long int i,n,vl,rslt,fr;
    while(scanf("%lld",&n)==1)
    {
        vl=(n+1)/2;
        rslt=vl*vl*2-1;
        fr=(rslt-4)+(rslt-2)+rslt;
        printf("%lld\n",(fr/3)*3);
    }
   return 0;
}
