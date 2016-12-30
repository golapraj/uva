#include<stdio.h>
factorial[100000000];
int main()
{
    int num;
    while(scanf("%d",&num)==1)
    {
        int i,golap=0,temp=0,z;
        factorial[0]=1;
        z=num;
        for(; num>=2; num--)
        {
            for(i=0; i<=golap; i++)
            {
                temp = (factorial[i]*num)+temp;
                factorial[i]=temp%10;
                temp=temp/10;
            }
            while(temp>0)
            {
                factorial[++golap]=temp%10;
                temp=temp/10;
            }
        }
        printf("%d!\n",z);
        for(i=golap; i>=0; i--)
        {
            printf("%d",factorial[i]);
        }
        printf("\n");
    }
    return 0;
}
