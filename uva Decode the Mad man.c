#include <stdio.h>
#include <string.h>
char s[1000];
int main()
{
    int i;
    while(gets(s))
    {
        for(i=0; s[i]!='\0'; i++)
        {
            if(s[i]==']')
                s[i]='p';
            else if(s[i]=='[')
                s[i]='o';
            else if(s[i]=='p')
                s[i]='i';
            else if(s[i]=='o')
                s[i]='u';
            else if(s[i]=='i')
                s[i]='y';
            else if(s[i]=='u')
                s[i]='t';
            else if(s[i]=='y')
                s[i]='r';
            else if(s[i]=='t')
                s[i]='e';
            else if(s[i]=='r')
                s[i]='w';
            else if(s[i]=='e')
                s[i]='q';
            else if(s[i]=='\'')
                s[i]='l';
            else if(s[i]==';')
                s[i]='k';
            else if(s[i]=='l')
                s[i]='j';
            else if(s[i]=='k')
                s[i]='h';
            else if(s[i]=='j')
                s[i]='g';
            else if(s[i]=='h')
                s[i]='f';
            else if(s[i]=='g')
                s[i]='d';
            else if(s[i]=='f')
                s[i]='s';
            else if(s[i]=='d')
                s[i]='a';
            else if(s[i]=='.')
                s[i]='m';
            else if(s[i]==',')
                s[i]='n';
            else if(s[i]=='m')
                s[i]='b';
            else if(s[i]=='n')
                s[i]='v';
            else if(s[i]=='b')
                s[i]='c';
            else if(s[i]=='v')
                s[i]='x';
            else if(s[i]=='c')
                s[i]='z';
        }
        printf("%s\n",s);
    }
    return 0;
}
