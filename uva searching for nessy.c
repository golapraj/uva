#include<stdio.h>
int main()
{
    int a,b,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&a,&b);
        printf("%d\n",((a/3)*(b/3)));
    }
    return 0;
}