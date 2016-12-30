#include<stdio.h>
int min(int x,int y)
{
    if(x>y)
        return y;
    return x;
}
int main()
{
    freopen("in.txt","r",stdin);
    int t,r,c,i;
    char p;
    scanf("%d\n",&t);
    for(i=0; i<t; i++)
    {
        scanf("%c %d %d\n",&p,&r,&c);
        if(p=='Q'||p=='r')
            printf("%d\n",min(r,c));
        else if(p=='k')
            printf("%d\n",((r*c)+1)/2);
        else if(p=='K')
            printf("%d\n",((c+1)/2)*((r+1)/2));
    }
    return 0;
}
