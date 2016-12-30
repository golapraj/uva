#include<stdio.h>
#include<string.h>
#include <ctype.h>
int main()
{
    char a[3000],b[3000];
    int i,k=0,c=0;
    while(gets(a))
    {
         c=0;
        if(!strcmp(a,"DONE"))
        {
            break;
        }

        for(i=0; a[i]; i++)
            a[i]=toupper(a[i]);

        for(i=0,k=0; a[i]!='\0'; i++)
        {
            if(a[i]>='A'&&a[i<='Z'])
            {
                b[k++]=a[i];
            }
        }
        b[k++]='\0';

        for(i=0; i<strlen(b)/2; i++)
        {

            if(b[i]==b[strlen(b)-i-1])
            {
                c++;
            }
        }
        if(c==strlen(b)/2)
            printf("You won't be eaten!\n");
        else
            printf("Uh oh..\n");
    }
    return 0;
}
