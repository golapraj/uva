#include<stdio.h>
int main()
{
    long int t,n,a,b,c,i,j,s;
    scanf("%ld",&t);
    while(t--)
    {
        s=0;
        scanf("%ld",&n);
        for(i=0;i<n;i++)
        {
            scanf("%ld %ld %ld",&a,&b,&c);
            s+=a*c;
        }
        printf("%ld\n",s);
    }
    return 0;
}
