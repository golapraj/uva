#include<stdio.h>
#include<algorithm>
#include<iostream>
#include<cstring>
using namespace std;
bool com(char n1,char n2)
{
    return n1>n2;
}
int main()
{
    long long d1,d2,d,t;
    char n[1000];
    while(scanf("%s",n)==1)
    {
        sort(n,n+strlen(n),com);
        d2=atoll(n);
        sort(n,n+strlen(n));
        for(int i=0;i<strlen(n);i++)
        {
           if(n[i]!='0')
           {
               t=n[i];
               n[i]=n[0];
               n[0]=t;
               break;
           }
        }
        d1=atoll(n);
       d=d2-d1;
       printf("%lld - %lld = %lld = 9 * %lld\n",d2,d1,d,d/9);

    }
      return 0;
}


