#include<stdio.h>
int main()
{
    freopen("in.txt","r",stdin);
    int t,np,s,p,z,x=0,i;

    while(scanf("%d",&t)==1)
    {
        for(i=0; i<t; i++)
        {
            scanf("%d %d %d",&np,&s,&p);
            z=s+p;
            while(z>np)
                z=z-np;
            printf("Case %d: %d\n",++x,z);
        }
    }
    return 0;
}
