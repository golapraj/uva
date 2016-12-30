#include <stdio.h>
#include<math.h>
int pc(int n)
{
    int i;
    for(i = 2 ; i<=sqrt(n) ; i++)
    {
        if(n%i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,i,golap;
    while(scanf("%d", &n) && n!=0)
    {
        golap = 0;
        for(i = 3 ; i < n ; i++)
        {
            if(pc(i) == 1 && pc(n-i)!=0)
            {
                printf("%d = %d + %d\n", n, i, (n-i));
                golap = 1;
                break;
            }
        }
        if(golap==0)
            printf("Goldbach's conjecture is wrong.\n");
    }
    return 0;
}

