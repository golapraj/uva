#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,i,p,tc,j;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d",&n);
        for(i=n/2; i<=n; i++)
        {
            p=1;
            for(j=2; j<=sqrt(i); j++)
            {
                if(i%j==0)
                {
                    p=0;
                    break;
                }
            }
            if(p==1)
            {
                if(i<=n && (i*2)>n)
                {
                    printf("%d\n",i);
                    break;
                }
            }
        }
    }
    return 0;
}
