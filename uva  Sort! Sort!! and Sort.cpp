#include<stdio.h>
#include<algorithm>
#include<cmath>
#include<cstdlib>
#include<stdbool.h>
int m;
using namespace std;
bool compare(int n1,int n2)
{
    if(n1%m!=n2%m)
        return n1%m<n2%m;
    else
    {
        if(abs(n1)%2==0 && abs(n2)%2==0)
            return n1<n2;
        else if(abs(n1)%2 && abs(n2)%2)
            return n1>n2;
        else if( abs(n1)%2 )
            return true;
        else
            return false;
    }
}

int main()
{
    freopen("in.txt","r",stdin);
    int n,i,nn[200001];
    while(scanf("%d %d",&n,&m)==2&&(m+n))
    {
        for(i=0; i<n; i++)
            scanf("%d",&nn[i]);

        sort(nn,nn+i,compare);
        printf("%d %d\n",n,m);
        for(i=0; i<n; i++)
            printf("%d\n",nn[i]);
    }
    printf("0 0\n");
    return 0;
}
