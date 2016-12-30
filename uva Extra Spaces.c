#include<stdio.h>
int main()
{
    int t,cases = 0,b=0;
    scanf("%d",&t);
    while(t--)
    {
        int n,j;
        scanf("%d",&n);
        getchar();
        b++;
        printf ("Case %d:\n", ++cases);
        int i;
        for(i=0; i<n; i++)
        {

            char g[505];
            gets(g);
            int s=1;
            for(j=0; g[j]; j++)
            {
                if(g[j]==' ')
                {
                    if(s)
                        printf(" ");
                    s=0;
                }
                else
                {
                    s=1;
                    printf("%c",g[j]);
                }
            }
            printf("\n");

        }
        if(t!=-0)
            printf("\n");
    }
    return 0;
}
