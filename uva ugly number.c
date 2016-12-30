#include <stdio.h>
int main()
{
    long long a,i,c=0;
    for(i=1;; i++)
    {
        a=i;
        while(1)
        {
            if(a%2==0)
                a=a/2;
            if(a%3==0)
                a=a/3;
            if(a%5==0)
                a=a/5;
            else if((a%2!=0)&&(a%3!=0)&&(a%5!=0))
                break;
        }
        if(a==1)
            c++;
        if(c==1500)
        {
            printf("%lld",i);
            break;
        }
    }
    return 0;
}
