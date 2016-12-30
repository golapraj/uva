#include<stdio.h>
int main()
{
    int n,i,j,c;
    while( scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        c=0;
        for(i=1; i<10; i++)
        {
            for(j=0; j<=i; j++)
            {
                if(n==(i*i*i - j*j*j))
                {
                    c=1;
                    break;
                }
            }
            if(c==1)
                break;
        }
        if(c==1)
            printf("%d %d\n",i,j);
        else
            printf("No solution\n");
    }
    return 0;
}
