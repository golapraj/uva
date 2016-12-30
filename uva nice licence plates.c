#include<stdio.h>
#include<math.h>
int main(void)
{
    int t,b,i,x,G;
    char a[5];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%3s-%d",a,&b);
        x=26*26*(a[0]-'A')+26*(a[1]-'A')+(a[2]-'A');
        G=abs(x-b);
        if(G>100)
            printf("not nice\n");
        else
           printf("nice\n");
    }
    return 0;
}
