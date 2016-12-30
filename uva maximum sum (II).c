#include <stdio.h>
int main()
{
    int n;
    while (scanf ("%d",&n) && n != 0)
    {
        int numbers[1010];
        int i,counter = 0,num,next = 0;
        for (i = 0; i < n; i++)
        {
            scanf("%d",&num);
            if (num != 0)
            {
                counter++;
                numbers[next] = num;
                next++;
            }
        }
        for (i = 0; i < next; i++)
        {
            printf("%d",numbers[i]);
            if (i < next-1)
                printf(" ");
        }
        if (counter == 0)
            printf("0");
        printf("\n");
    }
    return 0;
}
