#include<stdio.h>
#include<stdlib.h>
int compare(void const *a, void const *b)
{
    int *p, *q;
    p=(int *) a;
    q=(int *) b;
    return (*p-*q);
}
int main()
{
    static int num[2000005];
    long int n, i;
    while(scanf("%ld", &n)==1)
    {
        if(n==0)
            break;
        for(i=0; i<n; i++)
        {
            scanf("%d", &num[i]);
        }

        qsort(num, n, sizeof(int), compare);
        for(i=0; i<n; i++)
        {
            if(i!=(n-1))printf("%d ", num[i]);
            else printf("%d", num[i]);
        }
        printf("\n");
    }
}
