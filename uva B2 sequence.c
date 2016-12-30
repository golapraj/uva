#include <stdio.h>
#include <string.h>
int a[20001];
int main()
{
    freopen("in.txt","r",stdin);
    int n,i,j, z = 0, b[101];
    while(scanf("%d", &n) == 1)
    {
        int golap = 1;
        for(i = 0; i < n; i++)
        {
            scanf("%d", &b[i]);
            if(i == 0 && b[i] <= 0)
                golap = 0;
            if(i >= 1 && (b[i] <= b[i-1] || b[i] < 0))
                golap = 0;
        }
        memset(a, 0, sizeof(a));

        for( i = 0; i < n && golap; i++)
            for( j = i; j < n && golap; j++)
            {
                a[b[i]+b[j]]++;
                if(a[b[i]+b[j]] >= 2)
                    golap = 0;
            }
        if(golap)
            printf("Case #%d: It is a B2-Sequence.\n\n", ++z);
        else
            printf("Case #%d: It is not a B2-Sequence.\n\n", ++z);
    }
    return 0;
}
