#include<stdio.h>
#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    string s,c;
    int max=0;
    while(1)
    {
        cin>>s;
        if(s=="E-N-D")
            break;
        int len=s.size();
        if(len>max)
        {
            c=s;
            max=len;
        }
    }
    int i;
    for(i=0; i<max; i++)
    {
        if(c[i]>='A'&&c[i]<='Z')
            printf("%c",c[i]+32);
        else if(c[i]>='a'&&c[i]<='z'||c[i]=='-')
            printf("%c",c[i]);
    }
    printf("\n");
    return 0;
}
