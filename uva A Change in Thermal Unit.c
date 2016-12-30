#include <stdio.h>
int main()
{
    long long i,t;
    double g=0,c,f;
    while(scanf("%lld",&t)!=EOF)
    {
        for(i=1; i<=t; i++)
        {
            scanf("%lf %lf",&c,&f);
            g=c+(5*f/9);
            printf("Case %lld: %.2lf\n",i,g);
        }
    }
    return 0;
}
