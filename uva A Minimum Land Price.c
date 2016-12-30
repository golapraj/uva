#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int flag=0;
long long int land[100], test_case, sum, i, j, final_result, t;

int compare(const void *a, const void *b)
{
    long long int *p, *q;

    p=(long long int *) a;
    q=(long long int *) b;

    return (*q-*p);
}

int main()
{
    freopen("in.txt","r",stdin);
    while(scanf("%lld", &test_case)==1)
    {
        for(t=1; t<=test_case; t++)
        {
            for(i=0; i<42; i++)
            {
                scanf("%lld", &land[i]);
                if(land[i]==0)
                    break;
            }

            qsort(land, i, sizeof(long long int), compare);

            for(j=0, flag=0, sum=0; j<i; j++)
            {
                sum+=(2*pow(land[j], j+1));
                printf("(%d) ", sum);
                if(sum>5000000)
                {
                    flag=1;
                    printf("Too expensive\n");
                    break;
                }
            }

           if(flag==0)
                printf("%lld\n", sum);

            for(i=0; i<42; i++)
                land[i]=0;
        }
    }
    return 0;
}
