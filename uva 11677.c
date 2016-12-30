#include<stdio.h>
int main()
{
    int H1,H2,M1,M2,H,M;
    while(scanf("%d %d %d %d",&H1,&M1,&H2,&M2)==4)
    {
        int ans = 0;
       if(H1==0&&M1==0&&H1==0&&M1==0)
        break;

       H = H2 - H1;
       M = M2 - M1;

       if(M<0)
       {
           M = M + 60;
           H = H - 1;
       }

       if(H<0)
       {
           H = H + 24;
       }

       ans = H * 60 + M;
       printf("%d\n",ans);
    }
    return 0;
}
