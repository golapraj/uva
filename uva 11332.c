#include<stdio.h>

int golap(long long number)
{
    int sum=0,temp,i=0;
    for(; number!=0;)
    {
        temp=number%10;
        number=number/10;
        sum=sum+temp;
        i++;
    }
    return sum;
}

int main()
{
    long long s,i;
    while(1)
    {

        scanf("%lld", &s);
        if(s==0)
            break;
        else
        {
            while(s>9)
            {
                s=golap(s);
            }
            printf("%lld\n", s);
        }


    }
    return 0;
}
