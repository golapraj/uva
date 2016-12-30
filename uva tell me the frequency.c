#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,p[10000],j,x[10000],c,golap=0;;
    char s[10000];
    while(gets(s))
    {
        if(golap>0)
            printf("\n");
        l=strlen(s);
        for(i=0; i<l; i++)
            p[i]=(int)s[i];

        for(i=0; i<=130; i++)
        {
            c=0;
            for(j=0; j<l; j++)
            {
                if(i==p[j])
                    c++;
            }
            x[i]=c;
        }

        for(i=1; i<=1001; i++)
        {
            for(j=130; j>=0; j--)
            {
                if(x[j]==i)
                    printf("%d %d\n",j,i);
            }
        }
        golap++;
    }
    return 0;
}
