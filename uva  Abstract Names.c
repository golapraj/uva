#include<stdio.h>
#include<string.h>

int main()
{
    char real[21], game[21];
    int length, i, tst;
    scanf("%d", &tst);
    while(tst--)
    {
        scanf("%s", game);
        scanf("%s", real);
        if(strlen(game) != strlen(real))
        {
            printf("No\n");
            continue;
        }
        else
        {
            length = strlen(real);
            for(i = 0; i < length; )
            {
                if(game[i] == real[i])
                {
                    i++;
                    continue;
                }

                else if((game[i] == 'a' || game[i] == 'e' || game[i] == 'i' || game[i] == 'o' || game[i] == 'u')&&((real[i] == 'a' || real[i] == 'e' || real[i] == 'i' || real[i] == 'o' || real[i] == 'u')))
                {
                    i++;
                    continue;
                }
                else
                    break;
            }
        }
        if(i == length)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
