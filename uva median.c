#include <stdio.h>
#include <math.h>
int main()
{
    double m1, m2, m3,s, area, i;
    for(i=0; i<1000; i++)
    {
        scanf("%lf %lf %lf", &m1, &m2, &m3);
       s=(m1+m2+m3)/2;
        area=(4.0/3.0)*(sqrt(s*(s-m1)*(s-m2)*(s-m3)));
        if(area>0)
            printf("%.3lf\n", area);
        else
        {
            area=-1;
            printf("%.3lf\n", area);
        }
    }
    return 0;
}
