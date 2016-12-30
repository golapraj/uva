#include <stdio.h>

int main ()
{
    int pn;
    int month [15];
    int mp [15];
    int Case = 0;

    while ( scanf ("%d", &pn)==1)
    {

        if ( pn < 0 )
            return 0;

        month [0] = pn;

        int i;
        for ( i = 1; i < 13; i++ )
            scanf ("%d", &month [i]);

        for ( i = 0; i < 12; i++ )
            scanf ("%d", &mp [i]);

        printf ("Case %d:\n", ++Case);

        for ( i = 0; i < 12; i++ )
        {

            if ( pn >= mp [i] )
            {
                pn -= mp [i];
                printf ("No problem! :D\n");
            }

            else
                printf ("No problem. :(\n");

            pn += month [i + 1];
        }
    }
    return 0;
}

