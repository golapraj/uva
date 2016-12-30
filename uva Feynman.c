#include <stdio.h>
 int main()
 {
     long long a,i,d;
     while(scanf("%lld",&a)!=EOF)
     {
         if(a==0)
            break;
         d=0;
         for(i=1;i<=a;i++)
         {
             d+=i*i;
         }
         printf("%lld\n",d);
     }
     return 0;
 }
