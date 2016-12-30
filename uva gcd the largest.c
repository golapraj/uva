
#include <stdio.h>


int main()
{
    int t;
    scanf("%d",&t);
    long long n;
    while(t--)
    {
        scanf("%lld",&n);
        printf("%lld\n",(n>>1));
    }
    return 0;
}
