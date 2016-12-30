#include<stdio.h>
#include<string.h>
int main()
{
    int n, i, j;
    char s[1050];
    while(scanf("%d", &n) == 1)
    {
        scanf("%*s");
        scanf("%*s");
        scanf("%*s");
        scanf("%s", s);
        scanf("%*s");
        for(i = 0, j = 0; j < n; i += 4, j++)
        {
            if(s[i] == '*')
                printf("2");
            else if(s[i+1] == '*')
                printf("1");
            else
                printf("3");
        }
        printf("\n");
    }
    return 0;
}
