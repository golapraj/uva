#include <stdio.h>
int main()
{
    long long int a,b, i, j, lenth,num;
    int ter[100];
    for(a=1; a<=100; a++)
    {
        scanf("%lld", &num);
        if(num<0)
            break;
        for(i=0, lenth=1; i<100 ; i++)
        {
            ter[i]=num%3;
            num=((num-ter[i])/3);
            if(num==0)
                break;
            else
                lenth++;
        }
        for(j=lenth-1; j>=0; j--)
        {
            printf("%d", ter[j]);
        }
        printf("\n");
    }
}
