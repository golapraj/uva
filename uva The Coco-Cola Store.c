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
    for(i=1; i<=200; i++)
    {
        scanf("%d", &eb);
        if(eb==0)
            return 0;
        printf("%d\n",golap(eb));
    }
    return 0;
}
