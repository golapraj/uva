#include <stdio.h>
int main()
{
    long long int t,cn=1;
    scanf("%lld",&t);
    while(t--)
    {
        long long int n,i,c=-1,a[100100];
        scanf("%lld",&n);
        a[0]=0;
        for(i=1; i<=n; ++i)
        {
            scanf("%lld",&a[i]);
        }

        for(i=0; i<n; i++)
        {
            a[i]=a[i+1]-a[i];
        }
        i--;
        for(; i>=0; i--)
        {
            if(a[i]>c)
                c = a[i];
            else if(a[i]==c)
                c++;
        }
        printf("Case %lld: %lld\n",cn++,c);
    }
    return 0;
}
