#include<stdio.h>
int main ()
{
    int n, r,golap,i;
    int c = 0;
    while ( scanf ("%d %d", &r, &n) )
    {
        if ( r == 0 && n == 0 )
            break;
        golap=1;
        for ( i = 1; i <= 27; i++ )
        {
            if ( n * i >= r )
            {
                printf ("Case %d: %d\n", ++c, i - 1);
                golap = 0;
                break;
            }
        }

        if (golap)
            printf ("Case %d: impossible\n", ++c);
    }

    return 0;
}
