
#include<stdio.h>
#include<math.h>
int main()
{
    int t,x,y,r;
    float max,min;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&x,&y,&r);
        min=r - sqrt(x*x+y*y);
        max=r + sqrt(x*x+y*y);
        printf("%.2f %.2f\n",min,max);

    }
    return 0;
}
