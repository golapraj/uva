#include<stdio.h>
int main()
{
    long int g,l,t;
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld %ld",&g,&l);
        if(l%g==0)
            printf("%ld %ld\n",g,l);
        else
            printf("-1\n");
    }
return 0;
}
