#include <stdio.h>
#include <math.h>
#define pi 2*acos(0.0)
int main()
{
    long long t,i;
    double l,ag,ar,r,wd;
    while(scanf("%lld", &t)!=EOF)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%lf",&l);
            wd=l*6/10;
            r=l/5;
            ar=pi*r*r;
            ag=l*wd-ar;
            printf("%.2lf %.2lf\n",ar,ag);
        }
    }
    return 0;
}
