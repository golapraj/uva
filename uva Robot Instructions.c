#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    char ins[50],st[200];
    scanf("%d",&t);
    while(t--)
    {
        int n,i,p=0,g;
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            scanf("%s",ins);
            if(strcmp(ins,"RIGHT")==0)
            {
                p++;
                st[i]=1;
            }
            else if(strcmp(ins,"LEFT")==0)
            {
                p--;
                st[i]=-1;
            }
            else
            {
                scanf("%s%d",ins,&g);
                p+=st[g];
                st[i]=st[g];
            }

        }
        printf("%d\n",p);
    }
    return 0;
}
