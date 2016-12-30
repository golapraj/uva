#include<stdio.h>
#include<math.h>
int main()
{
     long int n,i,warriors,row;
     while(scanf("%ld",&n)==1)
     {

        for(i=1;i<=n;i++)
        {
            scanf("%ld",&warriors);
            row=(sqrt(1+8*warriors)-1)/2;
            printf("%ld\n",row);
         }
         return 0;
    }
    return 0;
}
