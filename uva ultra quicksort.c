#include <stdio.h>
long long A[100000000];
int main ()
{
    long long Num, c, i, j, Temp;
    while (  scanf("%lld", &Num)==1)
    {
        if(Num==0)
            break;
        for (i = 0; i < Num; i++)
            scanf("%lld", &A[i]);

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
        printf("%lld\n",c);
    }
    return 0;
}

