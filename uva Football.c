#include<stdio.h>
#include<math.h>
int main()
{
    freopen("in.txt","r",stdin);
    int n,g,s,r,i,point,gol[1000],z=0;
    while(scanf("%d %d",&n,&g)==2)
    {
        point=z=0;
        for(i=0; i<n; i++)
        {
            scanf("%d %d",&s,&r);
            if(s>r)
                point+=3;
            else
                gol[z++]=fabs(s-r);

        }
        printf("point %d\n",point);
        for(i=0; i<z; i++)
            printf("%d ",gol[i]);
        printf("\n");
    }
}
