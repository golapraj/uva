#include <stdio.h>
char s[1000000];
int main()
{
    while(gets(s))
    {
        int c = 0, max = 0, i;
        for(i = 0; s[i]; i++)
        {
            if(s[i] == ' ')
                c++;
            else
            {
                if(c > max)
                    max = c;
                c = 0;
            }
        }
        c = 0;
        while(max != 1)
        {
            c++;
            max = max/2 + (max - max/2 * 2);
        }
        printf("%d\n", c);
    }
    return 0;
}
