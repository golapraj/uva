#include<stdio.h>
#include<string.h>
int main()
{
    int t,ns,pd,i,j,cd[102],golap=0,z;
    char sub[102][100],su[25];
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d",&ns);
        for(j=0; j<ns; j++)
        {
            scanf("%s %d",sub[j],&cd[j]);

        }
        scanf("%d",&pd);
        scanf("%s",su);
        for(j=0; j<ns; j++)
        {
            if(strcmp(sub[j],su)==0)
            {
                golap=1;
                z=cd[j];
                break;
            }
        }
        if(pd>=z && golap==1)
            printf("Case %d: Yesss\n",i+1);
        else if(z > pd && z<=(pd+5) && golap==1)
            printf("Case %d: Late\n",i+1);
        else if(golap==0)
            printf("Case %d: Do your own homework!\n",i+1);
        else
            printf("Case %d: Do your own homework!\n",i+1);
        golap=0;
        z=0;
    }
    return 0;
}
