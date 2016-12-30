#include<stdio.h>
#include<string.h>
int main()
{
    char c[100];
    int t,d,s=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",c);
        if(strcmp(c,"donate")==0)
        {
            scanf("%d",&d);
            s+=d;
        }
        else  if(strcmp(c,"report")==0)
            printf("%d\n",s);
    }
   return 0;
}
