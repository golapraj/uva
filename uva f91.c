#include <stdio.h>
int main()
{
    int N;
    while(scanf("%d",&N)!=EOF && N!=0)
    {
        if(N<=100)
            printf("f91(%d) = 91\n",N);
        else
            printf("f91(%d) = %d\n",N,N-10);
    }
    return 0;
}
