#include <stdio.h>
int a[100][100];
int main()
{
    int n,r=0,i,j,sum,sum1,sum2,sum3,sum4;
    while(scanf("%d",&n)&& n)
    {
        r++;
        sum=0,sum1=0,sum2=0,sum3=0,sum4=0;
        for(i=0; i<n; i++)
            for(j=0; j<n; j++)
                scanf("%d",&a[i][j]);
        if(n==10)
        {
            for(i=0; i<n; i++)
                sum+=(a[0][i]+a[n-1][i]);
            for(i=1; i<n-1; i++)
                sum+=(a[i][0]+a[i][n-1]);
            for(i=1; i<n-1; i++)
                sum1+=(a[1][i]+a[n-2][i]);
            for(i=2; i<n-2; i++)
                sum1+=(a[i][1]+a[i][n-2]);
            for(i=2; i<n-2; i++)
                sum2+=(a[2][i]+a[n-3][i]);
            for(i=3; i<n-3; i++)
                sum2+=(a[i][2]+a[i][n-3]);
            for(i=3; i<n-3; i++)
                sum3+=(a[3][i]+a[n-4][i]);
            for(i=4; i<n-4; i++)
                sum3+=(a[i][3]+a[i][n-4]);
            sum4+=a[4][4]+a[4][5]+a[5][4]+a[5][5];
            printf("Case %d: %d %d %d %d %d\n",r,sum,sum1,sum2,sum3,sum4);
        }
        else if(n==9)
        {
            for(i=0; i<n; i++)
                sum+=(a[0][i]+a[n-1][i]);
            for(i=1; i<n-1; i++)
                sum+=(a[i][0]+a[i][n-1]);
            for(i=1; i<n-1; i++)
                sum1+=(a[1][i]+a[n-2][i]);
            for(i=2; i<n-2; i++)
                sum1+=(a[i][1]+a[i][n-2]);
            for(i=2; i<n-2; i++)
                sum2+=(a[2][i]+a[n-3][i]);
            for(i=3; i<n-3; i++)
                sum2+=(a[i][2]+a[i][n-3]);
            for(i=3; i<n-3; i++)
                sum3+=(a[3][i]+a[n-4][i]);
            for(i=4; i<n-4; i++)
                sum3+=(a[i][3]+a[i][n-4]);
            printf("Case %d: %d %d %d %d %d\n",r,sum,sum1,sum2,sum3,a[5][5]);
        }
        else if(n==8)
        {
            for(i=0; i<n; i++)
                sum+=(a[0][i]+a[n-1][i]);
            for(i=1; i<n-1; i++)
                sum+=(a[i][0]+a[i][n-1]);
            for(i=1; i<n-1; i++)
                sum1+=(a[1][i]+a[n-2][i]);
            for(i=2; i<n-2; i++)
                sum1+=(a[i][1]+a[i][n-2]);
            for(i=2; i<n-2; i++)
                sum2+=(a[2][i]+a[n-3][i]);
            for(i=3; i<n-3; i++)
                sum2+=(a[i][2]+a[i][n-3]);
            sum3+=a[3][3]+a[3][4]+a[4][3]+a[4][4];
            printf("Case %d: %d %d %d %d\n",r,sum,sum1,sum2,sum3);

        }
        else if(n==7)
        {
            for(i=0; i<n; i++)
                sum+=(a[0][i]+a[n-1][i]);
            for(i=1; i<n-1; i++)
                sum+=(a[i][0]+a[i][n-1]);
            for(i=1; i<n-1; i++)
                sum1+=(a[1][i]+a[n-2][i]);
            for(i=2; i<n-2; i++)
                sum1+=(a[i][1]+a[i][n-2]);
            for(i=2; i<n-2; i++)
                sum2+=(a[2][i]+a[n-3][i]);
            for(i=3; i<n-3; i++)
                sum2+=(a[i][2]+a[i][n-3]);
            printf("Case %d: %d %d %d %d\n",r,sum,sum1,sum2,a[3][3]);
        }
        else if(n==6)
        {
            for(i=0; i<n; i++)
                sum+=(a[0][i]+a[n-1][i]);
            for(i=1; i<n-1; i++)
                sum+=(a[i][0]+a[i][n-1]);
            for(i=1; i<n-1; i++)
                sum1+=(a[1][i]+a[n-2][i]);
            for(i=2; i<n-2; i++)
                sum1+=(a[i][1]+a[i][n-2]);
            for(i=2; i<n-2; i++)
                sum2+=(a[2][i]+a[n-3][i]);
            for(i=3; i<n-3; i++)
                sum2+=(a[i][2]+a[i][n-3]);
            printf("Case %d: %d %d %d\n",r,sum,sum1,sum2);
        }
        else if(n==5)
        {
            for(i=0; i<n; i++)
                sum+=(a[0][i]+a[n-1][i]);
            for(i=1; i<n-1; i++)
                sum+=(a[i][0]+a[i][n-1]);
            for(i=1; i<n-1; i++)
                sum1+=(a[1][i]+a[n-2][i]);
            for(i=2; i<n-2; i++)
                sum1+=(a[i][1]+a[i][n-2]);
            sum2+=(a[2][2]);
            printf("Case %d: %d %d %d\n",r,sum,sum1,sum2);
        }
        else if(n==4)
        {
            for(i=0; i<n; i++)
                sum+=(a[0][i]+a[n-1][i]);
            for(i=1; i<n-1; i++)
                sum+=(a[i][0]+a[i][n-1]);
            for(i=1; i<n-1; i++)
                sum1+=(a[1][i]+a[n-2][i]);
            for(i=2; i<n-2; i++)
                sum1+=(a[i][1]+a[i][n-2]);
            printf("Case %d: %d %d\n",r,sum,sum1);
        }
        else if(n==3)
        {
            for(i=0; i<n; i++)
                sum+=(a[0][i]+a[n-1][i]);
            for(i=1; i<n-1; i++)
                sum+=(a[i][0]+a[i][n-1]);
            sum1=a[1][1];
            printf("Case %d: %d %d\n",r,sum,sum1);
        }
        else if(n==2)
        {
            for(i=0; i<n; i++)
                sum+=(a[0][i]+a[n-1][i]);
            for(i=1; i<n-1; i++)
                sum+=(a[i][0]+a[i][n-1]);
            printf("Case %d: %d\n",r,sum);
        }
        else if(n==1)
            printf("Case %d: %d\n",r,a[0][0]);

    }
    return 0;
}
