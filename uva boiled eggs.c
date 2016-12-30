#include<stdio.h>
int main()
{
    int i,k=0,p,n,t,nq[50],q,c=0;
    scanf("%d",&t);
    while(t--)
    {
        c=0;
        scanf("%d %d %d",&n,&p,&q);
        for(i=0; i<n; i++)
        {
            scanf("%d",&nq[i]);
        }
        i=0;
        while(n-- && p-->0)
        {
            q-=nq[i++];
            if(q<0)
                break;
            c++;
        }

        printf("Case %d: %d\n",++k,c);
    }
    return 0;
}
