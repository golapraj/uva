#include<stdio.h>
int main()
{
    int t,n,cn=0,mil,jui,i,s[101],j;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        mil=0;
        jui=0;
        scanf("%d",&n);
        for(j=1; j<=n; j++)
        {
            scanf("%d",&s[j]);
            {
                mil+=s[j]/30+1;
                jui+=s[j]/60+1;
            }
        }
        mil=mil*10;
        jui=jui*15;
        if(mil<jui) printf("Case %d: Mile %d\n",++cn,mil);
        else if(mil>jui) printf("Case %d: Juice %d\n",++cn,jui);
        else printf("Case %d: Mile Juice %d\n",++cn,jui);
    }
}
