#include<stdio.h>
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    char piza[601];
    int i,k,t;
    scanf("%d",&t);
    for(k=0; k<t; k++)
    {
        scanf("%s",piza);
        int aa=0,mm=0,gg=0,ii=0,tt=0,rr=0,a=0,r=0,cudacudi=0;
        for(i=0; piza[i]!='\0'; i++)
        {
            if(piza[i]=='M')
                mm++;
            else if(piza[i]=='A')
                aa++;
            else if(piza[i]=='G')
                gg++;
            else if(piza[i]=='R')
                rr++;
            else if(piza[i]=='I')
                ii++;
            else if(piza[i]=='T')
                tt++;
        }
        while(aa>=3&&mm>=1&&rr>=2&&ii>=1&&gg>=1&&tt>=1)
        {
            a++;
            aa=aa-3;
            rr=rr-2;
            gg=gg-1;
            ii=ii-1;
            tt=tt-1;
            mm=mm-1;
        }
        printf("%d\n",a);

    }
    return 0;
}
