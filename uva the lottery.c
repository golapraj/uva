#include<stdio.h>
int main()
{
    freopen("in.txt","r",stdin);
    long int n,m,i,j,k,g,l;
    while(scanf("%ld",&n)==1)
    {
        g=0;
        scanf("%ld",&m);
        long int mm[100000]= {};
        long int nn[100000]= {};
        for(i=0; i<m; i++)
        {
            scanf("%ld",&mm[i]);
        }
        for(j=0; j<m; j++)
        {
            for(k=1; k<=n; k++)
            {
                if(k%mm[j]==0)
                    nn[k]=1;
            }
        }
        for(l=0; l<n; l++)
        {
            if(nn[l]==1)
                g++;
        }
        printf("%ld\n",n-g-1);
        g=0;
    }
    return 0;
}
