#include<stdio.h>
#include<string.h>
char s[10000];
int c[27];
int main()
{
    int n,i,max=0;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        gets(s);
        for(i=0; i<strlen(s); i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
            {
                c[s[i]-65]++;
            }
            else if(s[i]>='a'&&s[i]<='z')
            {
                c[s[i]-97]++;
            }
        }
        for(i=0; i<26; i++)
        {
            if(c[i]>max)
                max=c[i];
        }
        if(n==0)
            for(;;)
            {
                for(i=0; i<27; i++)
                {
                    if(c[i]==max)
                        printf("%c %d\n",i+65,c[i]);
                }
                max--;
                if(max==0)
                    break;
            }
    }
    return 0;
}
