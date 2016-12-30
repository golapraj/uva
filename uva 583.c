#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,l;
    while(scanf("%d", &n)!=EOF)
    {
        if(n==0) break;
        printf("%d = ",n);
        if(n<0)
        {
            printf("-1 x ");
            n=-1*n;
        }
        l=sqrt(n);
        for(i=2; i<=l; i=i++)
        {
            while(n%i==0)
            {
                printf("%d",i);
                n=n/i;
                if(n>1)
                    printf(" x ");
            }
        }
        if(n>1)
            printf("%d",n);
        printf("\n");

    }

    return 0;
}
