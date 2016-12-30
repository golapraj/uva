#include <stdio.h>
int main()
{
    long a,b,c,test,i;
    while(scanf("%ld", &test)!=EOF)
    {
        for(i=1; i<=test; i++)
        {
            scanf("%ld %ld %ld",&a,&b,&c);

            if(((a+b)<=c)||((b+c)<=a)||((a+c)<=b))
            {
                printf("Case %ld: Invalid\n",i);
            }
            else if(a==b&&b==c)
            {
                printf("Case %ld: Equilateral\n",i);
            }
            else if((a+b>c||b+c>a||a+c>b)&&(a==b||b==c||c==a))
            {
                printf("Case %ld: Isosceles\n",i);
            }
            else if(a!=b&&b!=c)
            {
                printf("Case %ld: Scalene\n",i);
            }
        }
    }
    return 0;
}

