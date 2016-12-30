#include<stdio.h>
#include<string.h>
char s[10000];
int main()
{
    freopen("in.txt","r",stdin);
    int i,max=0;
    while(gets(s))
    {
        max=0;
        int v[300]= {};
        for(i=0; s[i]; i++)
        {
            if(s[i]>='A'&&s[i]<='z')
                if(++v[s[i]]>max)
                    max=v[s[i]];
        }
        for(i=65; i<=122; i++)
            if(v[i]==max)
                printf("%c",i);
        printf(" %d\n",max);
    }
    return 0;
}
