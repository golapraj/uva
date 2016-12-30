#include<stdio.h>
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);

    char str[100],sign;
    int a,b,cb,r,c,ca=0;
    while(gets(str))
    {
        if(sscanf(str,"%d%c%d=%d",&a,&sign,&b,&cb)!=4)
            continue;
        if(sign=='+')
            r=a+b;
        else if(sign=='-')
            r=a-b;
        if(r==cb)ca++;
    }
    printf("%d\n",ca);
    return 0;
}
