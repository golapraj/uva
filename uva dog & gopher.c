#include<stdio.h>
#include<math.h>
int main()
{
    double gx,gy, dx,dy, dd,gd,x,y;
    int i,hn, golap=1;

    while(scanf("%d %lf %lf %lf %lf",&hn,&gx,&gy,&dx,&dy)==5)
    {
        golap=1;
        for(i=0; i<hn; i++)
        {
            scanf("%lf %lf",&x,&y);
            dd=(dx-x)*(dx-x)+(dy-y)*(dy-y);
            gd=(gx-x)*(gx-x)+(gy-y)*(gy-y);

            if(4.0*gd<=dd)
            {
                printf("The gopher can escape through the hole at (%.3lf,%.3lf).\n", x,y);
                golap=0;
            }
        }
        if(golap)
            printf("The gopher cannot escape.\n");
    }
    return 0;
}

