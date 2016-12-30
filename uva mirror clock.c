#include <stdio.h>
int main()
{
    int tc, hh, mm;
    scanf("%d", &tc);
    while(tc--)
    {
        scanf("%d:%d", &hh, &mm);
        hh= 11-hh;
        if(mm==0)
            hh=hh+1;
        if(hh <= 0)
            hh=hh+12;
        if(mm!= 0)
            mm= 60-mm;
        printf("%02d:%02d\n",hh,mm);
    }
    return 0;
}
