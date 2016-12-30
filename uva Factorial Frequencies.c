#include<stdio.h>
factorial[100000000];
int a[10];
int main()
{
    int num;
    while(scanf("%d",&num)==1&&num)
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
        for(i=golap; i>=0; i--)
        {
            if(factorial[i]==0) a[0]++;
            if(factorial[i]==1) a[1]++;
            if(factorial[i]==2) a[2]++;
            if(factorial[i]==3) a[3]++;
            if(factorial[i]==4) a[4]++;
            if(factorial[i]==5) a[5]++;
            if(factorial[i]==6) a[6]++;
            if(factorial[i]==7) a[7]++;
            if(factorial[i]==8) a[8]++;
            if(factorial[i]==9) a[9]++;
        }
        printf("%d! --\n",z);
        printf(" (0)%5d (1)%5d (2)%5d (3)%5d (4)%5d\n",a[0],a[1],a[2],a[3],a[4]);
        printf(" (5)%5d (6)%5d (7)%5d (8)%5d (9)%5d\n",a[5],a[6],a[7],a[8],a[9]);

        a[0]= a[1]= a[2]= a[3]= a[4]= a[5]= a[6]= a[7]= a[8]= a[9]=0;

    }
    return 0;
}

