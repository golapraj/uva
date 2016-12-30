#include<stdio.h>
int main()
{
    int n,dd1,mm1,yyyy1,dd2,mm2,yyyy2,i,age;
    while(scanf("%d",&n)==1)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%d/%d/%d",&dd1,&mm1,&yyyy1);
            scanf("%d/%d/%d",&dd2,&mm2,&yyyy2);
            age=yyyy1-yyyy2;
            if(mm1<mm2)
                age--;
            else if(mm1==mm2)
            {
                if(dd1<dd2)
                    age--;
            }
            if(age<0)
                printf("Case #%d: Invalid birth date\n", i );
            else if(age>130)
                printf("Case #%d: Check birth date\n", i);
            else
                printf("Case #%d: %d\n", i, age);
        }
    }
    return 0;
}

