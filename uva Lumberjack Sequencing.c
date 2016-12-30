#include<stdio.h>
int main()
{
    int t,c,i,a[15];
    printf("Lumberjacks:\n");
    while(scanf("%d",&t)==1)
    {
        while(t--)
        {
            for(i=0; i<10; i++)
            {
                scanf("%d",&a[i]);
            }
            if(a[0]>a[1])
            {
                c=0;
                for(i=0; i<9; i++)
                {
                    if(a[i]>a[i+1])
                    {
                        c++;
                    }
                }
            }
            else  if(a[0]<a[1])
            {
                c=0;
                for(i=0; i<9; i++)
                {
                    if(a[i]<a[i+1])
                    {
                        c++;
                    }
                }
            }

            if(c==9)
                printf("Ordered\n");
            else
                printf("Unordered\n");

        }
    }
    return 0;
}
