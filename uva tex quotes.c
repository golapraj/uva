#include<stdio.h>
int main()
{
    char ch;
    long int c=0;
    while(scanf("%c",&ch)==1)
    {
        if(ch=='"')
        {
            c++;
            if(c%2!=0)
                printf("``");
            else if(c%2==0)
                printf("''");
        }
        else printf("%c",ch);
    }
    return 0;
}
