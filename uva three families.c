#include<stdio.h>
#include <math.h>
int main()
{
    int a,b,c,n,z;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d %d",&a,&b,&c);
        z=c*(a+(a-b))/(a+b);
        printf("%d\n",z);
    }
    return 0;
}
