#include<stdio.h>
int bin[32];
int main()
{
    int i,j,n,dec,c;
    while(scanf("%d",&dec)==1&&dec!=0)
    {
        c=0;
        i=0;
        while(dec>0)
        {
            bin[i]=dec%2;
            i++;
            dec=dec/2;
        }
        printf("The parity of ");
        for(j=i-1; j>=0; j--)
        {
            if(bin[j]==1)
                c++;
            printf("%d",bin[j]);
        }
        printf(" is %d (mod 2).\n",c);
    }
    return 0;
}
