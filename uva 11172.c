#include <stdio.h>

int main()
{

    int n,s,e,i=0,testcase;
    while(scanf("%d", &testcase)!=EOF)
    {
        for(i =1;i<=testcase;i++)
           {
            scanf("%d %d",&s,&e);
            if(s==e)
              printf("=\n");
            else if(s<e)
              printf("<\n");
            else if(s>e)
              printf(">\n");

           }

    }
    return 0;
}
