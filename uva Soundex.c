#include <stdio.h>
#include <string.h>
int main()
{
    int c[26] = {0, 1, 2, 3, 0, 1, 2, 0, 0, 2, 2, 4, 5, 5, 0, 1, 2, 6, 2, 3, 0, 1, 0, 2, 0, 2};
    char s[21];
    int len, i, prev, d;

    while (gets(s) != NULL)
    {
        len = strlen(s);
        d = c[s[0]-'A'];
        if (d)
            printf("%d", d);
        prev = d;
        for (i = 1; i < len; i++)
        {
            d = c[s[i]-'A'];
            if (d && d != prev)
                printf("%d", d);
            prev = d;
        }
       printf("\n");
    }
    return 0;
}
