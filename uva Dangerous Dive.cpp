#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int z[10000];
int main()
{
    int n,r,a;
    while(cin>>n>>r)
    {
        for(int i=0; i<1000; i++)
        {
            z[i]=0;
        }
        for(int i=1; i<=r; i++)
        {
            cin>>a;
            z[a]=1;
        }
        if(n==r)
            cout<<"*"<<endl;
        else
        {
            for(int i=1; i<=n; i++)
            {
                if(z[i]!=1)
                {
                    printf("%d ",i);
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
