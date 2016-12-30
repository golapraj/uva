#include <stdio.h>
int main()
{
    int t,g,i;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&g);
        g = g*567;
        g=g/9;
        g+=7492;
        g=g*235;
        g=g/47;
        g=g-498;
        if(g<0)
            g = (-1)*g;
        printf("%d\n",(g/10)%10);
    }
    return 0;
}
