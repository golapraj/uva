#include<stdio.h>
int main()
{
    long a,p;
    while(scanf("%ld",&a)==1)
    {
        if(a==0)
            break;
        long  x=0,y=1,p=0;
        int i;
        for(i=1; i<=a; i++)
        {
            p=x+y;
            x=y;
            y=p;
        }
        printf("%ld\n",p);
    }
    return 0;
}
