#include<stdio.h>
int main()
{
    int i,a,b,c,d,sum,Sum,t;
    char A[5],B[5],C[5],D[5];
    while( scanf("%d\n",&t)!=EOF)
    {
        for(i=1; i<=t; i++)
        {
            sum=0;
            Sum=0;
            scanf("%s %s %s %s",A,B,C,D);

            for(i=1; i<4; i=i+2)
                sum=sum+A[i]-'0'+B[i]-'0'+C[i]-'0'+D[i]-'0';

            for(i=0; i<3; i=i+2)
            {
                a=(A[i]-'0')*2;
                b=(B[i]-'0')*2;
                c=(C[i]-'0')*2;
                d=(D[i]-'0')*2;
                Sum=Sum+a/10+b/10+c/10+d/10+a%10+b%10+c%10+d%10;
            }
            if(((sum+Sum)%10)!=0)
                printf("Invalid\n");
            else
                printf("Valid\n");
        }
        break;
    }
    return 0;
}
