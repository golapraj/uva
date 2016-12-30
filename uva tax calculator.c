#include<stdio.h>
int main()
{
    long long int n,t,i=0,tax;
    long double Tax,k;
    scanf("%lld",&t);
    while(t--)
    {
        Tax=0;
        scanf("%llf",&k);
        if(k>=0&&k<=180000)
            Tax=0;
        else if(k>180000&&k<=480000)
            Tax=(k-180000)*0.1;

        else if(k>480000&&k<=880000)
            Tax=((k-480000)*0.15)+30000;

        else if(k>880000&&k<=1180000)
            Tax=((k-880000)*0.2)+90000;

        else if(k>1180000)
            Tax=((k-1180000)*0.25)+150000;


        if(Tax>0&&Tax<2000)
            Tax=2000;

        tax=Tax;
        printf("Case %lld: %lld\n",++i,tax);
    }
    return 0;
}
