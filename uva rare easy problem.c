#include<stdio.h>
int main()
{
    unsigned long long nm,n,golap;
    while(scanf("%llu",&nm)==1)
    {
        if(nm==0)break;
        golap=(nm*10)/9;
        if(nm%9==0)
            printf("%llu %llu\n",golap-1,golap);
        else
            printf("%llu\n",golap);
    }
    return 0;
}
