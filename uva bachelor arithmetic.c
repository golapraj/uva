#include<stdio.h>
int main()
{
    long long int b,s,cnt=1;
    while(scanf("%lld %lld",&b,&s)==2&&(b+s))
    {
        if(b<=1 || s==0)
            printf("Case %d: :-\\\n",cnt++);
        else if(s>=b)
            printf("Case %d: :-|\n",cnt++);
        else
        {
            long long tmp1 = s*(b-1);
            long long tmp2 = (s-1)*b;
            if(tmp1>tmp2)
                printf("Case %d: :-(\n",cnt++);
            else
                printf("Case %d: :-)\n",cnt++);
        }

    }
     return 0;
}
