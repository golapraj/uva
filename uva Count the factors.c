#include<stdio.h>

int main()
{
    long n,j,c=0,g,i,f;
    while( scanf("%ld",&n)!=EOF && n>0)
    {
        g=n;
        for(j=2; j<=n; j++)
        {
            f=0;
            while(n%j==0)
            {
                n=n/j;
                f=1;
            }
            if(f)
            c++;
        }
        printf("%ld : %ld\n",g, c);
    }
    return 0;
}
