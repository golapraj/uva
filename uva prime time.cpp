#include<iostream>
#include<cmath>
#include<string.h>
#include<stdio.h>
#include<algorithm>

using namespace std;
bool prime[100010050];
void siv()
{
    int N=100010041;
    int sq=sqrt(N);
    for(int i=4; i<=N; i+=2)
        prime[i]=1;
    for(int i=3; i<=sq; i+=2)
    {
        if(prime[i]==0)
        {
            for(int j=i*i; j<=N; j+=i)
                prime[j]=1;
        }
    }
    prime[0]=prime[1]=1;
}
int main()
{
    freopen("in.txt","r",stdin);
    siv();
    int a,b,c=0,pm[10004];
    float p;
    memset(pm, 0, sizeof (pm));
    for(int i=0; i<=10000; i++)
    {
        if(prime[i*i+i+41]==0)
            pm[i]=1;
    }
    while(scanf("%d %d",&a,&b)==2)
    {
        c=0;
        for(int j=a; j<=b; j++)
        {
            if(pm[j])
                c++;
        }
        p=c*100.0/(b-a+1);
        printf ("%.2f\n", p);
    }
    return 0;

}

