#include<stdio.h>
#include<math.h>
int main()
{
    freopen("in.txt","r",stdin);
    int t,x1,x2,x3,x4,y1,y2,y3,y4,k=0;
    float a,b,c,d;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
        a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        b=sqrt((x2-x3)*(x2-x3)-(y2-y3)*(y2-y3));
        c=sqrt((x3-x4)*(x3-x4)-(y3-y4)*(y3-y4));
        d=sqrt((x4-x1)*(x4-x1)-(y4-y1)*(y4-y1));

        if(a=b=c=d)
        {
            if(x1==4||y1==y2)
                printf("Case %d: Square\n",++k);
            else
                printf("Case %d: Rhombus\n",++k);
        }
        else if(a==c&&b==d)
        {
            if(x1==4||y1==y2)
                printf("Case %d: Rectangle\n",++k);
            else
                printf("Case %d: Parallelogram\n",++k);
        }
        else if(a==c&&b==d)
        {
            printf("Case %d: Trapezium\n",++k);
        }
        else
            printf("Case %d: Ordinary Quadrilateral\n",++k);
    }
    return 0;
}

