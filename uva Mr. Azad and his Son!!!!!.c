#include<stdio.h>
#include<math.h>
int prime[1100002];
void siv()
{
    int i,j;
    int N=1000000;
    int sq=sqrt(N);
    for(i=4; i<=N; i+=2) prime[i]=1;
    for(i=3; i<=sq; i+=2)
    {
        if(prime[i]==0)
        {
            for(j=i*i; j<=N; j+=i)
                prime[j]=1;
        }
    }
    prime[1]=1;
}
int parfect(long long int m)
{
    int i,c=0;
    for(i=1; i<=m/2; i++)
    {
        if(m%i==0)
        {
            c=c+i;
        }
    }
    if(m==c)
        return 1;
    else
        return 0;
}
int main()
{
    siv();
    long long int n,p;
    while(scanf("%lld",&n)==1)
    {
        p=(pow(2,(n-1)))*(pow(2,n)-1);
        if(prime[n]==0&&parfect(p)==1)
            printf("Perfect: %lld!\n",p);
        else if(prime[n]==0&&parfect(p)==0)
            printf("Given number is prime. But, NO perfect number is available.\n");
        else
        printf("Given number is NOT prime! NO perfect number is available.\n");
    }
    return 0;
}
#include <stdio.h>
#include<math.h>
int main()
{
    long long data;
    int n,z,i;
    int prime[] = {2, 3, 5, 7, 13, 17, 19, 31};
    int notPerfect[] = {11, 23, 29};

    while (scanf("%d",&n)==1)
    {
        if (n == 0)
            break;
        data = ( pow (2 ,(n - 1)) ) * (( pow(2, n))-1);
        z = 0;
        for ( i = 0; i < 8; ++i)
        {
            if (prime[i] == n)
            {
                printf("Perfect: %lld!\n",data);
                z =1;
            }
        }
        if (z)
            continue;
        if (notPerfect[0] == n || notPerfect[1] == n || notPerfect[2] == n)
        {
            printf("Given number is prime. But, NO perfect number is available.\n");
        }
        else
            printf("Given number is NOT prime! NO perfect number is available.\n");
    }
    return 0;
}

