#include<stdio.h>
#include<string.h>
int main()
{
    freopen("in.txt","r",stdin);
    long int cs,m,v,lin,i,j,k,len,n[200];
    char txt[10000],l[200];
    double price;
    while(scanf("%ld\\n",&cs)==1)
    {
        for(k=1; k<=cs; k++)
        {
            price=0;
            scanf("%ld\n",&v);
            for(j=1; j<=v; j++)
            {
                scanf("%c %ld\n",&l[j],&n[j]);
            }
            scanf("%ld\n",&lin);
            for(j=1; j<=lin; j++)
            {
                gets(txt);
                len=strlen(txt);
                for(i=1; i<=v; i++)
                {
                    for(m=0; m<len; m++)
                    {
                        if(l[i]==txt[m])
                            price+=n[i];
                    }
                }
            }
            printf("%.2lf$\n",price/100);
        }
    }
    return 0;
}
