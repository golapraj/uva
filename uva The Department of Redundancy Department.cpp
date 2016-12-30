#include<iostream>
#include<stdio.h>
#include<map>
#include<vector>
using namespace std;
int n;
map<int,int>mm;
vector<int>vv;
int main()
{
    freopen("in.txt","r",stdin);
    while(scanf("%d",&n)==1)
    {
        if(mm[n]==0)
            vv.push_back(n);
        mm[n]++;
    }
    for(int i = 0; i < vv.size(); i++)
    {
        printf("%d %d\n", vv[i], mm[vv[i]]);
    }
    return 0;
}
