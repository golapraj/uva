#include<iostream>
#include<map>
#include<stdio.h>
using namespace std;
map<long,long> mp;
int main()
{
    int a,b,cd,c;
    while(cin>>a>>b)
    {
        c=0;
        if(a==0&&b==0)
            return 0;
        for(int i=0; i<a; i++)
        {
            cin>>cd;
            mp[cd]=1;
        }
        for(int i=0; i<b; i++)
        {
            cin>>cd;
            if(mp[cd]==1)
                c++;
        }
        mp.clear();
        cout<<c<<endl;
    }
    return 0;
}
