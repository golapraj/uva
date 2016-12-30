#include<stdio.h>
#include<string.h>
int golap(char z[])
{
    int sum=0,i;
    for(i=0; z[i]!='\0'; i++)
    {
        sum+=z[i]-48;
    }
    return sum;
}
int golap2(int number)
{
    int sum=0,temp;
    for(; number!=0;)
    {
        temp=number%10;
        number=number/10;
        sum=sum+temp;
    }
    return sum;
}
int main()
{
    char s[1000];
    int N,m;
    while(gets(s))
    {
        int z=1;
        N=golap(s);
        if(N==0)
            break;
        if(N<9)
            printf("%s is not a multiple of 9.\n",s);

        if(N==9)
            printf("%s is a multiple of 9 and has 9-degree 1.\n",s);

        if(N>9)
        {

            while(N>9)
            {
                z++;
                m=golap2(N);
                N=m;
            }
            if(N==9)
                printf("%s is a multiple of 9 and has 9-degree %d.\n",s,z);
            else if(N<9)
                printf("%s is not a multiple of 9.\n",s);
        }
    }
    return 0;
}
