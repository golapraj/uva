#include <stdio.h>
#include <math.h>
#define pi 3.141592653589793
int main()
{
    double a, b, c, i, j;
    double s, ro, ri, at, acc, ai;
    while(scanf("%lf %lf %lf", &a, &b, &c)==3)
    {
        s=(a+b+c)/2;
        at=sqrt(s*(s-a)*(s-b)*(s-c));

        ro=((a*b*c)/(4*at));
        ri=((at/s));

        acc=(pi*pow(ro, 2))-at;
        ai=(pi*pow(ri, 2));
        at=(at-ai);

        printf("%.4lf %.4lf %.4lf\n", acc, at, ai);
    }
    return 0;
}
