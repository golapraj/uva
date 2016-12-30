#include<stdio.h>
#include<math.h>
#define PI acos(-1)
int main()
{
    double AB,dist;
    double x1,y1,x2,y2,CMD,ENF;

    while(scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&CMD,&ENF)==6)
    {
        AB=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
        dist=AB*(1/tan(CMD*PI/180)+1/tan(ENF*PI/180));
        printf("%.3f\n",dist);
    }
    return 0;
}

