
#include <stdio.h>
int golap(int g)
{
    int a, b=0,c=3;
    if(g==2)
        b=1;
    while(g>=c)
    {
        a=g/c;
        b=b+a;
        g=a+(g%c);
        if(g==2)
            g=g+1;

    }
    return b;
}
int main()
{
    int eb,i;
    while(scanf("%d", &eb)==1)
    {
        printf("%d\n",golap(eb)+eb);
    }
    return 0;
}
