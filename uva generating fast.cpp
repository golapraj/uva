#include<iostream>
#include<algorithm>
#include<cstdio>
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
    freopen("in.txt","r",stdin);
    int l,t;
    char s[10000];
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        gets(s);
         l=strlen(s);

        sort(s,s+l,fun);
        printf("%s\n",s);

        while(next_permutation(s,s+l))
            printf("%s\n",s);
            printf("\n");

    }
    return 0;
}

