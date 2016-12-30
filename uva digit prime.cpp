#include<iostream>
#include<cmath>
#include<string>
#include<cstdio>
using namespace std;
int sum(long long n)
{
    int s=0;
    long long t;
    while(n)
    {
        t=n%10;
        n=n/10;
        s+=t;
    }
    return s;
}
bool prime[1100002];
void siv()
{
    int N=1000000;
    int sq=sqrt(N);
    for(int i=4; i<=N; i+=2) prime[i]=1;
    for(int i=3; i<=sq; i+=2)
    {
        if(prime[i]==0)
        {
            for(int j=i*i; j<=N; j+=i)
                prime[j]=1;
        }
    }
    prime[1]=1;
}
int main()
{
    //freopen("in.txt","r",stdin);
    siv();
    long long int t,s,e,i,z;
    scanf("%lld",&t);
    while(t--)
    {
        z=0;
        scanf("%lld %lld",&s,&e);

        for(i=s; i<e; i++)
        {
            if(prime[i]==0&&prime[sum(i)]==0)
                z++;
        }
        printf("%lld\n",z);
    }
    return 0;
}
