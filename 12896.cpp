#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    char kak[20][20];
    kak[1][1]='.';
    kak[1][2]=',';
    kak[1][3]='?';
    kak[1][4]='\"';
    kak[2][1]='a';
    kak[2][2]='b';
    kak[2][3]='c';
    kak[3][1]='d';
    kak[3][2]='e';
    kak[3][3]='f';
    kak[4][1]='g';
    kak[4][2]='h';
    kak[4][3]='i';
    kak[5][1]='j';
    kak[5][2]='k';
    kak[5][3]='l';
    kak[6][1]='m';
    kak[6][2]='n';
    kak[6][3]='o';
    kak[7][1]='p';
    kak[7][2]='q';
    kak[7][3]='r';
    kak[7][4]='s';
    kak[8][1]='t';
    kak[8][2]='u';
    kak[8][3]='v';
    kak[9][1]='w';
    kak[9][2]='x';
    kak[9][3]='y';
    kak[9][4]='z';
    kak[0][1]=' ';

    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        int a[n],b[n];
        for(int j=0; j<n; j++)
        {
            cin>>a[j];
        }
        for(int k=0; k<n; k++)
        {
            cin>>b[k];
        }

         for(int l=0; l<n; l++)
        {
            cout<<kak[a[l]][b[l]];
        }
        cout<<"\n";
    }
    return 0;
}
