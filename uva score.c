#include<stdio.h>
#include<string.h>
int main()
{
    freopen("in.txt","r",stdin);
    int t,x;
    scanf("%d",&t);
    while(t--)
    {
        int sum=0,i;
        x=0;
        char s[82];
        scanf("%s",s);

        for(i=0; i< strlen(s); i++)
        {
            if(s[i]=='X')
                x=0;
            else
            {
                x++;
                sum=sum+x;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
