#include<stdio.h>
#include<algorithm>
int ba[100001],sa[10001];
using namespace std;
int main()
{
    int  b,s,i,j,k=0,min;
    while(scanf("%d %d",&b,&s)==2&&b)
    {
        min=9999999999999;
        for(i=0; i<b; i++)
        {
            scanf("%d",&ba[i]);
        }
        for(i=0; i<s; i++)
        {
            scanf("%d",&sa[i]);
        }
        sort(ba,ba+b);
        if(b<=s)
            printf("Case %d: 0\n", ++k);
        else
            printf("Case %d: %d %d\n", ++k, b - s,ba[0]);
    }
    return 0;
}

