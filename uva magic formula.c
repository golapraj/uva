#include<stdio.h>
int main()
{

    long long f,i,k,a ,b ,c ,d ,L;

    while(scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&L)==5)
    {
        if(a==0&&b==0&&c==0&&d==0&&L==0)
            break;
        k=0;
        for(i=0; i<=L; i++)
        {
            f=(i*i*a)+(i*b)+c;
            if(f%d==0)
                k++;
        }
        printf("%lld\n",k);
    }
    return 0;
}

