#include <stdio.h>
#include <conio.h>

int main()
{
    int testCase,i,noOfC,j;
    double initial,final,c[5000];
    double sum,tmp,res;
    freopen("uva10014.txt","r",stdin);
    scanf("%d",&testCase);

    for(i=1; i<=testCase; i++)
    {
        if(i!=1)printf("\n");
        sum = 0;
        scanf("%d",&noOfC);
        scanf("%lf",&initial);
        scanf("%lf",&final);
        for(j=noOfC; j>=1; j--)
        {
            scanf("%lf",&tmp);
            sum += tmp*j*2;
        }

        res = (noOfC*initial + final - sum);
        printf("%.2f\n",res/(double)(noOfC+1));

    }

    getch();
    return 0;
}
