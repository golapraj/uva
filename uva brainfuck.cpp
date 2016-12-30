#include <stdio.h>
int main()
{
    freopen("in.txt","r",stdin);
    int t, cs = 0;
    char s[100005];
    scanf("%d", &t);
    getchar();
    while(t--)
    {
        gets(s);
        unsigned char mem[100] = {};
        int id = 0, i;
        for(i = 0; s[i]; i++)
        {
            switch(s[i])
            {
            case '>':
                id++;
                break;
            case '<':
                id--;
                break;
            case '+':
                mem[id]++;
                break;
            case '-':
                mem[id]--;
                break;
            }
            if(id >= 100)
                id = 0;
            if(id < 0)
                id = 99;
        }
        printf("Case %d:", ++cs);
        for(i = 0; i < 100; i++)
            printf(" %02X", mem[i]);
        printf("\n");
    }
    return 0;
}
