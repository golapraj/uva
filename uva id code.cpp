#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int l;
    char s[10000];
    while(gets(s))
    {
        if(strcmp("#",s)==0)
            break;
        l=strlen(s);
        if(next_permutation(s,s+l))
            printf("%s\n",s);
        else
            printf("No Successor\n");
    }
    return 0;
}
