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
        for(i = 2 ; i <=n-i; i++)
        {
            if(pc(i) == 1 && pc(n-i)!=0)
            {
                golap++;
            }
        }

            printf("%d\n",golap);
    }
    return 0;
}


