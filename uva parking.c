#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int z,m,i,a,max=-1,min=200;
        scanf("%d",&m);
        for(i=1; i<=m; i++)
        {
            scanf("%d",&a);
            if(min>a)
                min=a;
            if(max<a)
                max=a;
        }
        z=(max-min)*2;
        printf("%d\n",z);
    }
    return 0;
}

