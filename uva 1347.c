#include<stdio.h>
#include<math.h>
int main()
{
    int t,i;

    while(scanf("%d",&t))
    {
        double x[150],y[150];
        double dist = 0,d=0;

        for(i=0;i<t;i++)
        {
            scanf("%lf %lf",&x[i],&y[i]);
        }

         for(i=0;i<t;i++)
        {
            printf("%lf %lf\n",x[i],y[i]);
        }

        for(i=1;i<t;i++)
        {

           d = ( ((x[i-1]-x[i])*(x[i-1]-x[i])) + ((y[i-1]-y[i])*(y[i-1]-y[i])) );

           if(d<0)
            d = d*(-1);
            dist = dist + sqrt(d);
        }

        d = ( ((x[t-1]-x[0])*(x[t-1]-x[0])) + ((y[t-1]-y[0])*(y[t-1]-y[0])) );
        if(d<0)
        d = d*(-1);
        dist = dist + sqrt(d);


        printf("%lf",dist);
    }
}
