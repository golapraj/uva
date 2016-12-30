#include<stdio.h>
#include<string.h>
int main()
{
    freopen("in.txt","r",stdin);
    char s[20];
    int i,j,sum=0;
    gets(s);
    while(gets(s))
    {
        if(strcmp(s,"___________")==0)
            return 0;
        sum=0;
        if(s[9]=='o')
            sum+=1;
        if(s[8]=='o')
            sum+=2;
        if(s[7]=='o')
            sum+=4;
        if(s[5]=='o')
            sum+=8;
        if(s[4]=='o')
            sum+=16;
        if(s[3]=='o')
            sum+=32;
        if(s[2]=='o')
            sum+=64;
        if(s[1]=='o')
            sum+=128;
        printf("%c",sum);
    }
    return 0;
}
