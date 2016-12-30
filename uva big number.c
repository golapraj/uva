#include<stdio.h>
#include<math.h>
int a[10000001] = {0};
int main()
{
    int t, n, i;
    double l = 0;
    for(i = 1; i <= 10000000; i++)
    {
        l += log10(i);
        a[i] = (int)l;
    }
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        printf("%d\n", a[n]+1);
    }
    return 0;
}
