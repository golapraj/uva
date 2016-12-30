#include<stdio.h>
#include<math.h>
int main()
{
    int nm,a,t,T,b,w,tc=0,i;
    char s[10];
    scanf("%d",&T);
    while(T--)
    {
        a=b=t=w=0;
        scanf("%d",&nm);
        getchar();
        gets(s);
        for(i=0; i<nm; i++)
        {
            if(s[i]=='B')
                b++;
            if(s[i]=='W')
                w++;
            if(s[i]=='T')
                t++;
            if(s[i]=='A')
                a++;
        }
        if(b==w)
        {
            if(t==0&&w==0&&b==0)
                printf("Case %d: ABANDONED\n",++tc);
            else
                printf("Case %d: DRAW %d %d\n",++tc,b,t);
        }

        if(b>w)
        {
            if(w==0&&t==0)
            {
                printf("Case %d: BANGLAWASH\n",++tc);
            }
            else
                printf("Case %d: BANGLADESH %d - %d\n",++tc,b,w);
        }

        if(w>b)
        {
            if(b==0&&t==0)
                printf("Case %d: WHITEWASH\n",++tc);
            else
                printf("Case %d: WWW %d - %d\n",++tc,w,b);
        }

    }
    return 0;
}
