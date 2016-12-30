#include<stdio.h>
#include<string.h>
int main()
{
    int i,temp,g,l;
    char s[1020];
    while(gets(s))
    {
        g=0;
        l=strlen(s);
        if(l==1 && s[0]=='0')
            break;
        for(i=0; i<l; i++)
        {
            temp=g*10+(s[i]-'0');
            g=temp%17;
        }
        if(g==0)
            printf("1\n");
        else
            printf("0\n");
    }
    return 0;
}

