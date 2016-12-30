#include<stdio.h>
#include<math.h>
#define PI acos(-1.0)
int main()
{
    int T,D,V,i=1;
    double r;
    scanf("%d",&T);
    while(T)
    {
        scanf("%d %d",&D,&V);
        r = sqrt((12*V*282)/(7*PI*D));
        printf("Case %d: %.3lf\n",i,r*2);
        T--,i++;
    }
    return 0;
}
