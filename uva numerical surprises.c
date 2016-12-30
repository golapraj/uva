#include<stdio.h>
#include<string.h>
int main()
{
    freopen("in.txt","r",stdin);
    int n,mod;
    char s[3000];
    int t,i,l;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);

        scanf("%s",s);

        l=strlen(s);
        mod=0;
        for (i=0; i<l; i++)
        {
            mod=(mod*10+s[i]-'0')%n;
        }
        printf("%d\n",mod);
    }
    return 0;
}
