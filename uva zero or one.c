#include <stdio.h>
int main()
{
    int a=0,b=0,c=0;
    while(scanf("%d %d %d",&a,&b,&c)==3)
    {
        if((a == b) && (b == c))
            printf("*\n");
        else if(a==b && b!=c)
            printf("C\n");
        else if(a!=b && b==c)
            printf("A\n");
        else if(a!=b && b!=c)
            printf("B\n");
    }
    return 0;
}
