#include <stdio.h>

int main ()
{
    long t, A[52], Num, c, i, j, Temp;
    scanf("%ld", &t);

    while ( t-- )
    {

        scanf("%ld", &Num);

        for (i = 0; i < Num; i++)
            scanf("%ld", &A[i]);

        c = 0;
        for (i = 0; i < Num; i++)
        {
            for (j = i+1; j < Num; j++)
            {
                if (A [i] > A [j])
                {
                    Temp = A [i];
                    A [i] = A [j];
                    A [j] = Temp;
                    c++;
                }
            }
        }
        printf("Optimal train swapping takes %ld swaps.\n", c);
    }
    return 0;
}
