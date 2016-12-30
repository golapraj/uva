#include <stdio.h>
int main()
{
    double x1,y1,x2,y2;
    while (scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2)==4)
    {
        if (x1==x2&&y1==y2)
        {
            printf("Impossible.\n");
        }
        else
        {
            double x3,y3,x4,y4,x,y;
            x=(x1+x2)/2,y=(y1+y2)/2;

            y3=x-x1+y;
            x3=y1-y+x;
            y4=y+x-x2;
            x4=x-y+y2;

            printf("%.10f %.10f %.10f %.10f\n",x3,y3,x4,y4);
        }
    }
    return 0;
}
