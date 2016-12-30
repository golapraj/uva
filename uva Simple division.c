#include<stdio.h>
#include<stdlib.h>
int compare(void const *a, void const *b)
{
    int *p, *q;
    p=(int *) a;
    q=(int *) b;
    return (*p-*q);
}
int GCD(int a,int b)
{
    int c;
    while(a)
    {
        c=a;
        a=b%a;
        b=c;
    }
    return c;
}
int main()
{
    //freopen("in.txt","r",stdin);
    int num[1000],i=0,k,g;
    while(scanf("%d",&num[0])&&num[0])
    {
        while(scanf("%d",&num[++i])&&num[i]);
        qsort(num, i, sizeof(int), compare);
        g=num[1]-num[0];
        for(k=2; k<i; k++)
            g=GCD(g,num[k]-num[0]);
        printf("%d\n",g);
        i=0;
    }
    return 0;
}

