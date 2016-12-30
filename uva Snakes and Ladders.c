#include<stdio.h>
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        int p,ls,r,lsa[1001],ra[1001],i;
        scanf("%d %d %d",&p,&ls,&r);
        for(i=0; i<2*ls; i++)
            scanf("%d",&lsa[i]);
        for(i=0; i<r; i++)
            scanf("%d",&ra[i]);
    }
}
