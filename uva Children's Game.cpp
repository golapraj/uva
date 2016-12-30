#include<stdio.h>
#include<iostream>
#include<sstream>
#include<algorithm>
using namespace std;
bool cmp(string a,string b)
{
    if(a+b>b+a)
        return true;
    return false;
}
int main()
{
    freopen("in.txt","r",stdin);
    int t;
    while(cin>>t&&t)
    {
        string s[60];

        for(int i=0; i<t; i++)
        {
            cin>>s[i];
        }
        sort(s,s+t,cmp);
        for(int i=0; i<t; i++)
            cout<<s[i];
        cout<<"\n";
    }
    return 0;
}
