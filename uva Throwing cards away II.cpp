#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int t,x,a;
    while(scanf("%d",&t)==1&&t)
    {
        x=log10(t)/log10(2);
        a=(t-(1<<x))*2;
        if(a==0)
            printf("%d\n",t);
        else
            printf("%d\n",a);
    }
    return 0;
}
