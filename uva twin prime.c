#include<stdio.h>
int prime[20000010];
int tprime[20000010];
void sieve()
{
    prime[1]=0;
    int i,j,n=sqrt(20000010);
    for( i=3; i<=n; i++)
    {
        if(prime[i]!=0)
        {
            for( j=2*i; j<=20000010; j=j+i)
            {
                prime[j]=0;
            }
        }
    }
}
void twin_prime()
{
    int j=1,i;
    for( i = 3; i<=20000000; i++)
    {
        if(prime[i] && prime[i+2])
        {
            tprime[j++] = i;
        }
    }
}
int main()
{
    memset(prime,1,sizeof(prime));
    sieve();
    twin_prime();
    int n;
    while(scanf("%d",&n)==1)
    {
        printf("(%d, %d)\n",tprime[n],tprime[n]+2);
    }
    return 0;
}
