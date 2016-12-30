#include <stdio.h>
#include <math.h>
int main()
{
    int s,e,i,c,r;
    while(scanf("%d %d", &s,&e)!=EOF)
    {
        if(s==0 && e==0)
            break;
            c=0;
        for(i=s;i<=e;i++)
        {
            r=sqrt(i);
            if(r*r==i)
                c++;
        }
        printf("%d\n",c);
    }
    return 0;
}
