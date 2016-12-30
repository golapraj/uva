#include<stdio.h>
#include<stdlib.h>
int compare(void const *a, void const *b)
{
    int *p, *q;
    p=(int *) a;
    q=(int *) b;
    return (*p-*q);
}
int main()
{
    int t,s[1000],e[1000],a,b,z,d[1000],i,sum,c;
    scanf("%d",&t);
    while(t--)
    {
        z=0;
        while(scanf("%d %d",&a,&b)!=EOF &&!(a==0 &&b==0))
            d[z++]=b-a;
        qsort(d, z, sizeof(int), compare);

        sum=c=0;
        for(i=0; i<z; i++)
        {
            if(sum+d[i]<11)
                sum+=d[i]+1,c++;
            else
                break;
        }
        printf("%d\n",c);
    }
    return 0;
}
