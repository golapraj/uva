#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    freopen("in.txt","r",stdin);
    int a,b,c,r,sum,l,line;
    char s[80];
    while(scanf("%d %d %d",&a,&b,&c)==3)
    {
        line=1;
        scanf("%s",s);
        sum=strlen(s);
        while(--a)
        {
            scanf("%s",s);
            l=strlen(s);
            if(sum+l+1<=c)
            {
                sum+=l+1;
            }
            else
            {
                line++;
                sum=l;
            }
        }
        r=ceil(line*1.0/b);
        printf("%d\n",r);
    }
    return 0;
}
