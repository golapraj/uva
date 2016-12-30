#include <stdio.h>
int facts(int n)
{
    int i;
    int s=1;
    for(i=2; i<=n; i++)
    {
        s *= i;
        while((s%10)==0)
        {
            s /= 10;
        }
        s %= 100000;
    }
    return s % 10;
}
int main(void)
{
    int n;

    while(scanf("%d", &n)==1)
    {
        printf("%5d -> %d\n", n, facts(n));
    }
    return 0;
}

