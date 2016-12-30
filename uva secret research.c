#include<stdio.h>
char sss[1000];
int pos()
{
    if(strcmp(sss,"1")==0)
        return 1;

    if(strcmp(sss,"4")==0)
        return 1;

    if(strcmp(sss,"78")==0)
        return 1;
    return 0;
}
int neg()
{
    int l;
    l=strlen(sss);
    if(l<3)
        return 0;
    else if(sss[l-2]=="3"&&sss[l-1]=="5")
        return 1;
    return 0;
}
int fail()
{
    int l;
    l=strlen(sss);
    if(l<3)
        return 0;
    if(sss[0]=="9"&&sss[l-1]=="4")
        return 1;
    return 0;
}
int incom()
{
    int l;
    l=strlen(sss);
    if(l<4)
        return 0;
    if(sss[0]=="1"&&sss[1]=="9"&&sss[2]=="0")
        return 1;
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        gets(sss);
        if(pos())
        {
            printf("+\n");
            return 0;
        }
        else if(neg())
        {
            printf("-\n");
            return 0;
        }
        else if(fail())
        {
            printf("*\n");
            return 0;
        }
        else if(incom())
        {
            printf("?\n");
            return 0;
        }
    }
    return 0;
}

