#include<stdio.h>
#include<string.h>
int mtoin(char mtoi[])
{
    if (strcmp(mtoi, "January") == 0)
        return 1;
    if (strcmp(mtoi, "February") == 0)
        return 2;
    if (strcmp(mtoi, "March") == 0)
        return 3;
    if (strcmp(mtoi, "April") == 0)
        return 4;
    if (strcmp(mtoi, "May") == 0)
        return 5;
    if (strcmp(mtoi, "June") == 0)
        return 6;
    if (strcmp(mtoi, "July") == 0)
        return 7;
    if (strcmp(mtoi, "August") == 0)
        return 8;
    if (strcmp(mtoi, "September") == 0)
        return 9;
    if (strcmp(mtoi, "October") == 0)
        return 10;
    if (strcmp(mtoi, "November") == 0)
        return 11;
    if (strcmp(mtoi, "December") == 0)
        return 12;
    return -1;
}

int main()
{
    freopen("in.txt","r",stdin);
    int tc, k = 1, ly;
    int mS, dS, yS, mE, dE, yE;
    char mon1[20],mon2[20];
    scanf("%d", &tc);
    while (tc--)
    {
        scanf("%s %d, %d", mon1, &dS, &yS);
        mS = mtoin(mon1);
        scanf("%s %d, %d", mon2, &dE, &yE);
        mE = mtoin(mon2);
        if (mS > 2)
            yS++;
        if (mE < 2 || (mE == 2 && dE < 29))
            yE--;
        ly =yE/4 - (yS -1)/4;
        ly -= yE / 100 - (yS - 1) / 100;
        ly += yE / 400 - (yS - 1) / 400;
        printf("Case %d: %d\n", k++, ly);
    }
    return 0;
}
