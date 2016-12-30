#include <stdio.h>
#include <string.h>

int main(void)
{
    int i, inputNumber, isCarmichael;
    long long result;
    int table[15]= {561,1105,1729,2465,2821,6601,8911,10585,15841,29341,41041,46657,52633,62745,63973};

    while(scanf("%d", &inputNumber) && inputNumber!=0)
    {
        isCarmichael = 0;
        for(i=0; i<15; i++)
        {
            if( table[i] == inputNumber )
            {
                isCarmichael = 1;
            }
        }
        if( isCarmichael )
            printf("The number %d is a Carmichael number.\n", inputNumber);
        else
            printf("%d is normal.\n", inputNumber);
    }

    return 0;
}
