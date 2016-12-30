#include<stdio.h>
#include<string.h>
int main()
{
        while(1)
        {
            int i,x,ans=0,in=1;
        char a[100];
        gets(a);
        x=strlen(a);
        for(i=0;i<x;i++)
        {
                if((a[i]>='a' && a[i]<='z')||(a[i]>='A' && a[i]<='Z'))
                    while(in)
                    {
                        ans++;
                        in=0;
                    }
                    else in=1;
        }
            printf("%d\n",ans);
        }
        return 0;
}
