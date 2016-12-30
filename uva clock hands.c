#include<stdio.h>
int main()
    {
         double min,hour,angl,h,m;
          while(scanf("%lf:%lf",&hour,&min)==2)
          {
              if((hour==0)&&(min==0))
              break;
             h=hour*30+(min/60)*30;
             m=min*6;
             angl=(h-m);
if(angl<0)
angl*=-1;

              if (angl>180)
              angl=360-angl;

              printf("%.3lf\n",angl);
          }
          return 0;
    }
