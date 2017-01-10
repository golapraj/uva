#include <stdio.h>
int main()
{
    int x1,x2,y1,y2;
    double dis;
    while(scanf("%d %d %d %d",&x1,&y1,&x2,&y2)==4)
    {
        printf("%.6lf\n",(x1-x2)*1.0*(x1-x2)+(y1-y2)*1.0*(y1-y2))/6);
    }
    return 0;
}
