#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
#include<map>
#include<string>
#include<cctype>
#include<cstdlib>
#include<set>
using namespace std;
int main()
{
    set<string>golap;
    string s;
    while(cin>>s)
    {
        string p="";
        int l=s.size();
        for(int i=0; i<=l; i++)
        {
            if(isalpha(s[i]))
                p+=tolower(s[i]);
            else if(p!="")
            {
                golap.insert(p);
                p="";
            }
        }
    }
    set<string>::iterator g;
    for(g=golap.begin(); g!=golap.end(); g++)
        cout<<*g<<endl;
    return 0;
}
