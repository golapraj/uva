#include<stdio.h>
#include<map>
#include<queue>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    freopen("in.txt","r",stdin);
    map<int,string>mp;
    priority_queue< int >p_qmx;
    priority_queue< int >p_qmn;
    string n;
    int t,d,m,y,dd;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>d>>m>>y;
        dd=d+m*30+y*12*30;
        mp[dd]= n;
        p_qmx.push(dd);
        p_qmn.push(-dd);
    }
    cout<<mp[p_qmx.top()]<<endl;
    cout<<mp[-p_qmn.top()]<<endl;
    return 0;
}
