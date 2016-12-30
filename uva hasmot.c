#include<stdio.h>

int main()
{
    int z;
    char b[10]="Golap";
    char a[100]="Golap";
    z=strcp(a,b);
    printf("%d",z);
}
int strcp(char c[],char d[])
{
    int i=0;
    while(c[i]==d[i])
    {
        if(c[i]=='\0')
        {
            return 0;
        }
        i++;
    }
    return c[i]-d[i];
}
