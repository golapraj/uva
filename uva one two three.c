#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int n;
    char a[7],chr;
    scanf("%d%c",&n,&chr);
    while(n--)
    {

        gets(a);
        if(strlen(a)==5)
            printf("3\n");
        else if((a[0]=='t' && a[1]=='w')||
                (a[0]=='t' && a[1]=='o')||
                (a[1]=='w' && a[2]=='o')||
                (a[0]=='t' && a[2]=='o')||
                (a[0]=='t' && a[2]=='w'))
            printf("2\n");
        else
            printf("1\n");
    }
    return 0;
}
