#include<stdio.h>
int main()
{
    int i,j,k,l,m,c,np,hp,nd,t,hf[200];
    scanf("%d",&t);
    while(t--)
    {
        int day[3655]={0};
        c=0;
        scanf("%d",&nd);
        scanf("%d",&np);
        for(i=0; i<np; i++)
            scanf("%d",&hf[i]);
        for(j=0; j<np; j++)
        {
            for(k=1; k<=nd; k++)
            {
                if(k%hf[j]==0)
                    day[k-1]=1;
            }
        }
        for(l=1; l<=nd; l++)
        {
            if(l%7==0 || l%7==6)
                day[l-1]=0;
        }
        for(m=1;m<=nd;m++)
        {
            if(day[m-1]==1)
                c++;
        }
        printf("%d\n",c);
    }
    return 0;
}
