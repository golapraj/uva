#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<cstdlib>
using namespace std;
int main()
{
    freopen("in.txt","r",stdin);
    string x,y,a;
    char golap[3000];
    memset(golap,NULL,sizeof(golap));
    golap['A']='A';
    golap['E']='3';
    golap['H']='H';
    golap['I']='I';
    golap['J']='L';
    golap['L']='J';
    golap['M']='M';
    golap['O']='O';
    golap['S']='2';
    golap['T']='T';
    golap['U']='U';
    golap['V']='V';
    golap['W']='W';
    golap['X']='X';
    golap['Y']='Y';
    golap['Z']='5';
    golap['1']='1';
    golap['2']='S';
    golap['3']='E';
    golap['5']='Z';
    golap['8']='8';
    while(cin>>a)
    {
        x=y="";
        int sl=a.size();
        for(int i=sl-1; i>=0; i--)
        {
            x+=a[i];
            y+=golap[a[i]];
        }
        if (a==x && a==y)
            cout<<a<<" -- is a mirrored palindrome."<<endl<<endl;
        else if (a==x && a!=y)
            cout<<a<<" -- is a regular palindrome."<<endl<<endl;
        else if (a!=x && a==y)
            cout<<a<<" -- is a mirrored string."<<endl<<endl;
        else
            cout<<a<<" -- is not a palindrome."<<endl<<endl;
    }
    return 0;
}
