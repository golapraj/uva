#include <stdio.h>
int main()
{
    int n, f, a, i, j, k, test;
    scanf("%d", &test);
    for(a=0; a<test; a++)
    {
        scanf(" %d %d", &f, &n);
        {
            for(i=0; i<n; i++)
            {
                for(j=1; j<f; j++)
                {
                    for(k=1; k<=j; k++)
                        printf("%d", j);
                    printf("\n");
                }
                for(k=f-1; j>=1; j--)
                {
                    for(k=1; k<=j; k++)
                        printf("%d", j);
                    printf("\n");
                }
                if(i!=(n-1))
                    printf("\n");
            }
            if(a!=(test-1))
                printf("\n");
        }
    }
}
