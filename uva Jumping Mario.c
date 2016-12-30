#include<stdio.h>
int main()
{
    int T,N,CN=1,i=1,a[50],high,low;;
    while(scanf("%d",&T)!=EOF)
    {
        for(i=1; i<=T; i++)
        {
            scanf("%d",&N);
            for(i=1; i<=N; i++)
            {
                scanf("%d",&a[i]);
            }
            high=0;
            low=0;
            for(i=1; i<N; i++)
            {

                if(N==1)
                {
                    low=0;
                    high=0;
                }

                else if(a[i]<a[i+1])
                {
                    high++;
                }
                else if(a[i]>a[i+1])
                {
                    low++;
                }
            }
            printf("Case %d: %d %d\n",CN,high,low);
            CN++;
        }
    }
    return 0;
}
