#include<stdio.h>
#include<string.h>
int main()
{
    freopen("in.txt","r",stdin);
    int t;
    int i,j,max;
    scanf("%d\n",&t);
    while(t--)
    {
        max=0;
        char s[205]= {};
        int sa[300]= {};
        gets(s);
        for(i=0; i<strlen(s); i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
                sa[s[i]+32]++;
            else if(s[i]>='a'&&s[i]<='z')
                sa[s[i]]++;
        }
        for(i='a'; i<='z'; i++)
        {
            if(sa[i]>max)
                max=sa[i];
        }
        for(i='a'; i<='z'; i++)
        {
            if(sa[i]==max)
                printf("%c",i);
        }
        printf("\n");
    }
    return 0;
}
