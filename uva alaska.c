#include <stdio.h>
#include <algorithm>
using namespace std;
int main ()
{
    int n,p;
    while ( scanf ("%d", &n) && n )
    {
        int a [1500];
        for ( int i = 0; i < n; i++ )
            scanf ("%d", &a [i]);
        sort (a, a + n);
        p=1;
        for ( int i = 1; i < n; i++ )
            if ( a [i] - a [i - 1] > 200 )
                p =0;
        if ( 2 * (1422 - a [n - 1]) > 200 )
            p=0;
        if (p)
            printf ("POSSIBLE\n");
        else
            printf ("IMPOSSIBLE\n");
    }
    return 0;
}
