#include<stdio.h>
#include<math.h>

int main()
{
    long int n;
    while(scanf("%ld",&n)==1 )
    {
        if (prime(n)!=1)
            printf ("%ld is not prime.\n", n);
        else
        {
            int n1=rev(n);
            if ( prime(n1)==1 && n1!=n )
                printf ("%ld is emirp.\n",n);

            else
                printf ("%ld is prime.\n",n);
        }
    }
    return 0;
}
int prime (long int x)
{
    int i;
    for ( i = 2; i<= sqrt(x); i++)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}
int rev(unsigned int n)
{
    unsigned int t = 0;
    do
        t = t * 10 + n % 10;
    while ((n /= 10) > 0);
    return t;
}
