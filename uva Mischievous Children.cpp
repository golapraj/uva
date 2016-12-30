#include <iostream>
#include <cstdio>
using namespace std;
long long fact(int n)
{
    long long res = 1;
    for (int i = 2; i <= n; i++)
        res *= i;
    return res;
}
int main()
{
    int n,v=0;
    scanf("%d", &n);
    char input[21];
    while (n--)
    {
        scanf("%s", input);
        int repeats[26];
        for (int i = 0; i < 26; i++)
            repeats[i] = 0;
        int length = 0;
        for (length = 0; input[length]; length++)
            repeats[input[length] - 'A']++;

        long long res = fact(length);
        for (int i = 0; i < 26; i++)
        {
            res /= fact(repeats[i]);
        }
       printf("Data set %d: %lld\n",++v,res);
    }
    return 0;
}
