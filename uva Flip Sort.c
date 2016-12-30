#include <stdio.h>
int main()
{
    int n,i, j, tem, c, num[1000];
    while(scanf("%d", &n)==1)
    {   c=0;
        for(i=0; i<n; i++)
        {
            scanf(" %d", &num[i]);
        }
        for(i=1; i<n; ++i)
        {
            for(j=n-1; j>=i; --j)
            {
                if(num[j-1]>num[j])
                {   c++;
                    tem=num[j-1];
                    num[j-1]=num[j];
                    num[j]=tem;
                }
            }
        }
        printf("Minimum exchange operations : %d\n", c);
    }
    return 0;
}
