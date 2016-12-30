#include<iostream>
#include<stack>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    freopen("in.txt","r",stdin);
    stack<char>par;
    int n;
    char s[1000],t;
    cin>>n;
    getchar();
    while(n--)
    {
        stack<char>par;
        gets(s);
        if(strlen(s)==1||strlen(s)%2!=0)
        {
            cout<<"No\n";
            continue;
        }
        int z=0;
        for(int i=0; i<strlen(s); i++)
        {
            if(s[i]=='('||s[i]=='[')
                par.push(s[i]);
            else if(s[i]==')' && !par.empty() && par.top()=='(')
                par.pop();
            else if(s[i]==']' && !par.empty() && par.top()=='[')
                par.pop();
            else
                z=1;
        }
        if(par.empty()&&z==0)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}
