#include <stdio.h>

main()
{
    int number[100];
    int test_case, n, captain_index, t, j, i, tem;
    while(scanf("%d", &test_case)==1)
    {
        for(t=1; t<=test_case; t++)
        {
            scanf("%d", &n);

            for(i=0; i<n; i++)
            {
                scanf("%d", &number[i]);
            }

            captain_index=n/2;
            printf("Case %d: %d\n",t, number[captain_index]);
        }
    }
    return 0;
}
