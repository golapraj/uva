#include<stdio.h>
int main()
{
    char a[100],b[100];
    int i,j,k,l,n,z;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        scanf("%s",&a);
        l=strlen(a);
        k=l/n;
        z=0;
        for(i=k-1; i<l; i=i+k)
        {
            for(j=i; j>i-k; j--)
                b[z++]=a[j];
        }
        b[z++]='\0';
        printf("%s\n",b);
    }
    return 0;
}
