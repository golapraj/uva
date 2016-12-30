#include <stdio.h>
int main()
{
    long long i,j,k, num11, num22, num1, num2;
    long long seq[10000];
    while(scanf("%lld %lld", &num11, &num22)==2)
    {
        k=0;
        num1=num11;
        num2=num22;
        if(num1<num2 || num1<2 || num2<2)
            printf("Boring!\n");
        else
            for(i=1; ; i++)
            {
                if(num1==1)
                {
                    seq[k]=1;
                    for(j=0; j<k; j++)
                        printf("%lld ",seq[j]);
                    printf("%lld\n", seq[k]);
                    break;
                }
                else if(num1%num2==0)
                {
                    seq[k]=num1;
                    k++;
                    num1=num1/num2;
                }
                else
                {
                    printf("Boring!\n");
                    break;
                }
            }
    }
    return 0;
}
