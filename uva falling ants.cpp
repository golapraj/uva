#include<stdio.h>
int main()
{
    int t,a,b,c,mx,mxa,v,i;
    while(scanf("%d",&t)==1&&t)
    {
        mx=0,mxa=0;
        for(i=0; i<t; i++)
        {
            scanf("%d %d %d",&a,&b,&c);
            if(c>mx)
            {
                mx=c;
                mxa=a*b*c;
            }
            else if(c==mx)
            {
                v=a*b*c;
                if(v>mxa)
                    mxa=v;
            }
        }
        printf("%d\n",mxa);
    }
    return 0;
}
