#include <stdio.h>

int GCD(n1,n2)
{
    int t;

    while(n1!=0)
    {
        t=n2%n1;
        n2=n1;
        n1=t;
    }
    return n2;
}
int main ()
{
    int G,i,j,N;
    while(scanf("%d", &N)!=EOF)
    {
        if(N==0)
            break;
        G=0;
        for(i=1; i<N; i++)
            for(j=i+1; j<=N; j++)
            {
                G+=GCD(i,j);
            }
        printf("%d\n",G);
    }
    return 0;
}
