#include<stdio.h>
int main()
{
    long long int n;
    while(scanf("%lld",&n)==1)
    {
        int count = 0;
        while (n != 0)
        {
            count++;
            if (n % 2 != 0)
            {
                if (((n - 1) / 2) % 2 == 0 || (n - 1) == 2)
                {
                    n--;
                }
                else
                    n++;
            }
            else
            {
                n /= 2;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}

