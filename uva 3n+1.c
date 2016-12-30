rr#include <stdio.h>

int golap(long n)
{
    long c;
    c=1;
    while(n!=1)
    {
        if(n%2==0)
            n=n/2;
        else
            n=3*n+1;
        c++;

    }
    return c;
}

int main()
{


    freopen("out.txt","w",stdout);
    freopen("in.txt","r",stdin);
    long i,d,c=0,s,e,j=0,z;
    while((scanf("%ld %ld", &s ,&e))!=EOF)

    {

        j=0;
        if(s>e)
        {
            for(i=e; i<=s; i++)
            {
                d=golap(i);
                if (d>=j)
                    j=d;
            }
        }
        else
            for(i=s; i<=e; i++)
            {
                d=golap(i);
                if (d>=j)
                    j=d;
            }

        printf("%ld %ld %ld\n",s,e,j);
    }
}
