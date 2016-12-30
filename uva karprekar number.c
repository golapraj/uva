#include <stdio.h>
#define MAX  40001
unsigned long long int kaprekar[MAX];
void preCalcKaprekar()
{
    unsigned long long int i,j,k,l,part1,part2,dec;
    for(i=2; i<MAX; i++)
    {
        k=i*i;
        part1=0;
        part2=0;
        dec=1;
        while(k>=10)
        {
            part1=k/10;
            part2=(k%10)*dec+part2;
            dec=dec*10;
            k=k/10;
            if(part1!=0&&part2!=0&&part1+part2==i)
            {
                kaprekar[i]=1;
                break;
            }
        }

    }
}

int main()
{
    preCalcKaprekar();
    unsigned long long int input1,input2,test,i,j,flag;
    scanf("%llu",&test);
    for(i=0; i<test; i++)
    {
        printf("case #%llu\n",i+1);
        flag=0;
        scanf("%llu %llu",&input1,&input2);
        for(j=input1; j<=input2; j++)
        {
            if(kaprekar[j])
            {
                printf("%llu\n",j);
                flag=1;
            }
        }
        if(flag==0)
            printf("no kaprekar numbers\n");
        if(i!=test-1)
            printf("\n");
    }
    return 0;
}

