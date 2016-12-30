#include<stdio.h>
#include<string.h>
int main()
{
    int l=0,max=0;
    char s[200];
    char mx[200];
    while(scanf("%s",s)==1)
    {
        if(strcmp(s,"E-N-D")==0)
            return 0;
        l=strlen(s);
        if(l>max)
        {
            max=l;
            mx = s;
        }
    }
}
