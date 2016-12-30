#include<stdio.h>

int btd(char* s)
{
    int n = 0,i;
    for(i=0; s[i]!='\0'; i++)
    {
        n = n*2 + s[i]-'0';
    }
    return n;
}

int gcd(int a, int b)
{
    int tmp;
    while(a % b != 0)
    {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return b;
}
int main()
{
    int n,i;
    char s1[31],s2[31];
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%s", s1);
        scanf("%s", s2);
        if( gcd(btd(s1), btd(s2)) > 1)
            printf("Pair #%d: All you need is love!\n", i);
        else
            printf("Pair #%d: Love is not all you need!\n", i);
    }
    return 0;
}

