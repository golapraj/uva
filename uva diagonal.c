#include<stdio.h>
#include<math.h>
int main()
{
   long long int t=0,n,m;

    while(scanf("%lld",&n)==1&&n)
    {
         m=ceil((3+sqrt(9+8*n))/2);
         printf("Case %lld: %lld\n",++t,m);
    }
    return 0;
}
