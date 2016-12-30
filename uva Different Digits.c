#include<stdio.h>
int main()
{
    int n,m,z,s[10],k,c=0,i,a,p;
    while(scanf("%d%d",&n,&m)==2)
    {
        c=0;
        for(i=n; i<=m; i++)
        {
           k=0;
           p=i;
            for(z=0; z<10; z++)
            {
                s[z]=0;
            }
            while(p)
            {
                a=p%10;
                p=p/10;

                if(s[a]==0)
                    s[a]=1;
                else if(s[a]==1)
                {
                    k=1;
                    break;
                }
            }
            if(k!=1)
                c++;
        }
        printf("%d\n",c);
    }
    return 0;
}
