#include<iostream>
#include<cmath>
#include<string>
#include<cstdio>
using namespace std;
bool prime[10000000];
void siv()
{
    int N=10000000;
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
}
int main()
{
    siv();
    int n,c,z,a[1000],k=0,d,x;
    while(scanf("%d %d",&n,&c)==2)
    {
        z=0;
        for(int i=1; i<=n; i++)
            if(prime[i]==0)
            {
                z++;
                a[k++]=i;
            }
            printf("%d %d:",n,c);
        if(z%2)
        {
            d=z-(2*c - 1);
            for(int j=d/2; j<(d/2)+(2*c - 1); j++)
                printf(" %d",a[j]);
        }
        else
        {
            d=z-(2*c);
            for(int j=d/2; j<(d/2)+(2*c - 1); j++)
                printf(" %d",a[j]);
        }
printf("\n");
    }
}


