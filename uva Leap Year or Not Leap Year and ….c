#include<stdio.h>
#include<string.h>
int main()
{
    char y[100001];
    int yd4,yd100,yd400,yd15,yd55,i,l,golap=0;
    while (scanf("%s",&y)==1)
    {
        yd4=0;
        yd100=0;
        yd15=0;
        yd55=0;
        yd400=0;
        if (golap>0)
            printf("\n");
        golap++;
        l=strlen(y);
        for (i=0; i<l; i++)
        {
            yd4=(yd4*10+y[i]-'0')%4;
            yd55=(yd55*10+y[i]-'0')%55;
            yd15=(yd15*10+y[i]-'0')%15;
            yd100=(yd100*10+y[i]-'0')%100;
            yd400=(yd400*10+y[i]-'0')%400;
        }
        if ((!yd4 && yd100) || !yd400)
        {
            printf("This is leap year.\n");
            if (!yd15)
                printf("This is huluculu festival year.\n");
            if (!yd55)
                printf("This is bulukulu festival year.\n");
        }
        else
        {
            if (!yd15)
                printf("This is huluculu festival year.\n");
            else
                printf("This is an ordinary year.\n");
        }
    }
    return 0;
}
