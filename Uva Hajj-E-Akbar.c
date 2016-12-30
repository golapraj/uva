
#include<stdio.h>
#include<string.h>
int main()
{
    char s[6];
    int i=0;
    while(scanf("%s",s))
    {
        if(strcmp(s,"*")==0)
            break;
        else if(strcmp(s,"Hajj")==0)
            printf("Case %d: Hajj-e-Akbar\n",++i);
        else
            printf("Case %d: Hajj-e-Asghar\n",++i);
    }
    return 0;
}
