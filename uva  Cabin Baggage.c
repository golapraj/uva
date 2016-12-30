#include<stdio.h>
int main()
{
    freopen("in.txt","r",stdin);
    int t;
    float l,wd,d,w;
    int z=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%f %f %f %f",&l,&wd,&d,&w);
        if((((l<=56&&wd<=45&&d<=25)||(l+wd+d)<=125))&&w<=7)
        {
            printf("1\n");
            z++;
        }
        else
            printf("0\n");
    }
    printf("%d\n",z);
    return 0;
}
