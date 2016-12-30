#include<iostream>
#include<stdio.h>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    freopen("in.txt","r",stdin);
    long long int t,q,r,d,c,sq;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        long long int a[200000];
        long long int z;
        cin>>c>>r;
        cout<<"Case #"<<i+1<<":";
        d=c-r;
        if(d==0)
        {
            cout<<" 0"<<endl;
            continue;
        }
        else
        {
            z=0;
            sq=sqrt(d);
            for(int j=1; j<=sq; j++)
                if(d%j==0)
                {
                    if(j>r)
                        a[z++]=j;
                    if((d/j)>r)
                        a[z++]=d/j;
                }
            sort(a,a+z);
            a[z]='\0';
            for(int i=0; a[i]; i++)
                if(a[i]!=a[i+1])
                    cout<<" "<<a[i];
            cout<<"\n";
        }
    }
    return 0;
}
