#include <stdio.h>
#include <string.h>
int main()
{
    char p[30],p1[30];
    int n,i;
    scanf("%d",&n);
    getchar();
    for(i=1; i<=n; i++)
    {
        int sum=0,sum1=0,a,b,k;
        gets(p);
        gets(p1);
        a=strlen(p1);
        for(k=0; k<a; k++)
            if(p1[k]!=' ')
                sum+=p1[k];
        b=strlen(p);
        for(k=0; k<b; k++)
            if(p[k]!=' ')
                sum1+=p[k];
        if(sum!=sum1)
            printf("Case %d: Wrong Answer\n",i);
        else if((sum==sum1) &&(a==b))
            printf("Case %d: Yes\n",i);
        else
            printf("Case %d: Output Format Error\n",i);
    }
    return 0;
}
