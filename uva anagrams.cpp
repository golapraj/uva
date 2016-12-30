#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
bool fun(char a,char b)
{
    if(tolower(a)==tolower(b))
        return a<b;
    return tolower(a)<tolower(b);
}
int main()
{
    long long tc,l;
    char s[10000];
    scanf("%lld",&tc);
    getchar();
    while(tc--)
    {
        gets(s);
        l=strlen(s);
        sort(s,s+l,fun);
        printf("%s\n",s);
        while(next_permutation(s,s+l,fun))
            printf("%s\n",s);
    }
    return 0;
}
