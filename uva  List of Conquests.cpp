#include<iostream>
#include<stdio.h>
#include<map>
#include<string>
#include<set>
using namespace std;
int main()
{
    freopen("in.txt","r",stdin);
    map<string,int> mp;
    set<string>st;
    set<string>::iterator k;
    string s,g;
    int n;
    cin>>n;
    while(n--)
    {
        cin>>s;
        getline(cin,g);
        mp[s]++;
        st.insert(s);
    }
    for(k=st.begin(); k!=st.end(); k++)
        cout<<*k<<" "<<mp[*k]<<endl;
    return 0;
}
