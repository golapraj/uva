#include<stdio.h>
int N, n;
int main()
{
    while(1)
    {
        scanf("%d", &N);
        if(N == 0) break;

        int i,sum = 0, max = -1000;
        for( i = 0; i < N; i++)
        {
            scanf("%d", &n);
            sum += n;

            if(sum > max)
                max = sum;
            if(sum < 0)
                sum = 0;
        }

        if(sum > 0)
            printf("The maximum winning streak is %d.\n", max);
        else
            printf("Losing streak.\n");
    }
    return 0;
}
