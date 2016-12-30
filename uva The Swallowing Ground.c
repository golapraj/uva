#include<stdio.h>
 int main()
{
    int N;
    int nl = 0;
    while( scanf( "%d", &N ) != EOF )
    {
        int i;
        for( i = 0 ; i < N ; i++ )
        {
            if( nl )
                printf( "\n" );
            nl = 1;
            int W;
            scanf( "%d", &W );
            int y1, y2;
            int ok = 1;
            scanf( "%d%d", &y1, &y2 );
            int gap = y1-y2;
            int j;
            for( j = 1 ; j < W ; j++ )
            {
                scanf( "%d%d", &y1, &y2 );
                if( y1-y2 != gap )
                    ok = 0;
            }
            if( ok )
                printf( "yes\n" );
            else
                printf( "no\n" );
        }
    }
    return 0;
}

