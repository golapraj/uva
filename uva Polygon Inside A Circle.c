#include <stdio.h>
int main()
{
    double r,l;
    while(scanf("%lf%lf", &r, &l)==2)
    {
        printf("%.3lf\n",(r*r*l*sin(2*acos(-1)/l))/2);
    }
    return 0;
}
